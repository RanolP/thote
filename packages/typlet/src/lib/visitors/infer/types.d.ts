import { Visitor } from "../types.js";

export type Type =
  | { kind: "primitive"; name: "i32" | "f64" | "bool" | "string" }
  | { kind: "literal"; name: "{integer}" | "{float}" };

export type InferenceRule = Visitor<Type>;
