open Jest;

describe("Events component", () =>
  test("renders", () => {
    let component = <Events /> |> Enzyme.shallow;
    Expect.expect(Enzyme.length(component)) |> Expect.toBe(1);
  })
);
