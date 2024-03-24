import { Scope } from "../symbol-table.js";
import { SyntaxNode } from "tree-sitter";

export type Visitor<T> = (env: Scope, node: SyntaxNode) => T;

export type CodegenOutput = { js?: string; dts?: string };

export type CodegenVisitor = Visitor<CodegenOutput>;
