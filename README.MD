# The Bor Programming Langage

This is just a language because I want to learn how to create my own.

## Specifications

- Typed variables and function
- Primitive types are value type
- Other types are referenced type
- Functions can be stored in variables
- Everything is true except 0 or Null
- Get variable is ascendant, if we can get a variable in the current context, we get it from above
- During compilation, node of function or put in global context

## Class Diagram

Class diagram of the AST.

```mermaid
classDiagram
    class Context {
        -Map ~String~Node~ m_variables
        +Node getNode(String name)
        +addVariable(String name, Node node)
        +setVariable(String name, Node node)
    }
    Context o-- "parent" Context

    Context <.. Node

    class Node {
        <<Abstract>>
        +Node* interpret(Context context)
    }

    class Identifier {
        -String m_name
    }

    class FunctionCall {
        -Node parameters[]
    }

    class NullValue

    class Operator {
        +Node m_left
        +Node m_right
    }
    
    class AddOperator
    class SubOperator
    class DivideOperator
    class MultiplyOperator

    class VariableDefinition {
        +String m_name
        +Node m_value
    }

    class VariableDeclaration {
        +PrimitiveType m_type
        %% Set variable to NullValue or the value passed
    }

    class ValueNode {
        <<Abstract>>
        +PrimitiveType m_type
    }


    class Block
    class Function {
        -parameterNames[]
    }

    class ConditionnalBlock {
        <<Abstract>>
        +Node condition
    }

    class WhileStatement
    class IfStatement
    class ForStatement

    PrimitiveType <.. ValueNode

    class PrimitiveType {
        <<Enum>> 
        String
        Number
        Bool
        Null
        Function
    }

    class StringValue {
        -String m_value

        +String value()
    }

    class NumberValue {
        -float m_value

        +float value()
    }

    class BoolValue {
        -bool m_value

        +bool value()
    }

    Node "*" --* "code" Block
    Block <|-- ConditionnalBlock
    ConditionnalBlock <|-- IfStatement
    ConditionnalBlock <|-- WhileStatement
    WhileStatement <|-- ForStatement
    ValueNode <|-- Function
    Block <|-- Function
    
    Node <|-- Block

    Node <|-- VariableDefinition
    VariableDefinition <|-- VariableDeclaration

    Node <|-- ValueNode
    Node <|-- Identifier
    ValueNode <|-- StringValue
    ValueNode <|-- NumberValue
    ValueNode <|-- BoolValue
    ValueNode <|-- NullValue
    Identifier <|-- FunctionCall


    Node <|-- Operator
    Operator <|-- AddOperator
    Operator <|-- SubOperator
    Operator <|-- MultiplyOperator
    Operator <|-- DivideOperator
```