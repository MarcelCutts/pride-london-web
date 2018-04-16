open Jest;

describe("Navigation component", () =>
  test("renders", () => {
    let component = <Navigation updatePath=(_m => ()) /> |> Enzyme.shallow;
    Expect.expect(Enzyme.length(component)) |> Expect.toBe(1);
  })
);