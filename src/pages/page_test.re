open Jest;
open Expect;

test("addition", () => {
    expect(1+2) |> toEqual(3);
});