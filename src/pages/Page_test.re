open Jest;

describe("Page component", () =>
  test("renders", () => {
    let component = <Page /> |> Enzyme.shallow;
    Expect.expect(Enzyme.length(component |> Enzyme.find("Splash")))
    |> Expect.toBe(1);
  })
);