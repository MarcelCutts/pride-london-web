open Jest;

describe("Home component", () =>
  test("renders", () => {
    let component = <Home /> |> Enzyme.shallow;
    Expect.expect(Enzyme.length(component |> Enzyme.find("Splash")))
    |> Expect.toBe(1);
  })
);
