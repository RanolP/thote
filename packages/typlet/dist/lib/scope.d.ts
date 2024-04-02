import { JSOption } from "typlet-std";
declare const __Scope_Nominal: unique symbol;
export type Scope = (
  { [__Scope_Nominal]: never } &
  {
    global: JSOption<Scope>,
parent: JSOption<Scope>
  }
);
export declare const Scope: {
  make: (p0: {
    global: JSOption<Scope>,
parent: JSOption<Scope>
  }) => Scope,
}