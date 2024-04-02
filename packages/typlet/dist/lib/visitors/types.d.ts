import { SyntaxNode } from "tree-sitter";
import { Env } from "./env.js";

export type Visitor<T> = (env: Env, node: SyntaxNode) => T;

export type CodegenOutput = { js?: string; dts?: string };

export type CodegenVisitor = Visitor<CodegenOutput>;
