# typlet

Good Script Language understanding TypeScript and Compiles to Web

## Concepts

```typlet
// Basic Variable
let isRunning = false
let pi = 3.141592
let r = 4cm
let area = r * r * pi
//  ^?
//  50.26… cm^2
var s = dedent`
    hello
`
s = $"w\{"o"}rld"
let point2d = {x:1,y:2,z:3}.{x,y}
point2d."x"

// Destructuring
let [first, ..., last] = [0, 1, 2]
let { a, b as c } = { a: 1, b: 2 }

// Function
fn double(x: int) => 2 * x
let halven = fn(x: int) => x / 2 

pi == double(halven(pi))

// Type Declaration
type Email(String)
type Pos { x: i32, y: i32 }
type Nat = O | Succ(Nat)

// Pattern Matching
let nat_halven(n: Nat) = match n {
    O | Succ(O) => O
    Succ(Succ(let n)) = Succ(nat_halven(n))
}

// Capability-Passing Style Coeffect
effect ZIO {
    die(msg: String) => !
}

let validate(x: unknown) = {
    if x !is record { do ZIO.die("it must be object") }
    let { firstName, lastName } = x else { do ZIO.die("it must have firstName and lastName") }
    { firstName, lastName }
}
type ValidateFn = typeof validate
//   ^?
//   ZIO / (x: unknown) => { firstName: unknown, lastName: unknown }

try {
    validate({ firstName: "John", lastName: "Smith" })
} with ZIO {
    die(msg) {

    }
}

// Control Flow
if a > b { (a, b) = (b, a) }
let fg1 = if theme == .dark { white } else { black }
if fg1.lumi in 0..=50% { /* it is light theme */ }
if s is String { ... }
if s is Iterable { ... }
if s is Some(let x) { ... }
for i in 0..10 { log(i) }
while i < 10 {
    i += 1
}

// JSX
match list {
    [] => <Empty />
    [e] => <User name={e.name} decoration={e.score > 0 then "crown"}>
    let rest => (
        <ul>
            {rest
                .sortBy { $.key }
                .map(fn(e, i) {
                    <li>
                        <User name={e.name} decoration={i == 0 then "crown"}>
                    </li>
                })
            }
        </ul>
}

// Pipe
[]
||> $.push(2)
||> .push(1)
|> qsort($)
||> log

// Trait-like usage
@symbol.times
effect Mul<Rhs> {
    type Result;
    fn mul(self, rhs: Rhs) -> @Result;
}
impl Mul<i32> for string {
    type Result = string
    fn mul(self, rhs) = self.repeat(rhs)
}

// Option & Result
// Infix Operator Creation
effect Option {
    none() => !
}
effect Result<E> {
    err(err: E) => !
}
```
