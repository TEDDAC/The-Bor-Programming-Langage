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
        +Node interpret(Context context)
    }

    class Block
    class Function {
        -parameterNames[]
    }

    class ConditionnalBlock {
        +Node condition
    }

    class WhileStatement
    class IfStatement
    class ForStatement

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

    class Identifier {
        -String m_name

        +String name
    }


    class FunctionCall {
        -parameters[]
    }

    class NullValue
    class NonTerminalExpression
    class TerminalExpression
    class AddOperator
    class SubOperator
    class DivideOperator
    class MultiplyOperator

    Node --o "code" Block
    Block <|-- Function
    Block <|-- ConditionnalBlock
    ConditionnalBlock <|-- IfStatement
    ConditionnalBlock <|-- WhileStatement
    WhileStatement <|-- ForStatement
    
    Node <|-- NonTerminalExpression
    NonTerminalExpression <|-- Block
    NonTerminalExpression <|-- AddOperator
    NonTerminalExpression <|-- SubOperator
    NonTerminalExpression <|-- MultiplyOperator
    NonTerminalExpression <|-- DivideOperator
    
    Node <|-- TerminalExpression
    TerminalExpression <|-- StringValue
    TerminalExpression <|-- NumberValue
    TerminalExpression <|-- BoolValue
    TerminalExpression <|-- NullValue
    TerminalExpression <|-- Identifier
    Identifier <|-- FunctionCall
```