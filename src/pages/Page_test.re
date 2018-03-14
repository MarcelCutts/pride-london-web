open Jest;

describe("Page component", () =>
  test("renders", () => {
    let component = <Page message="test" /> |> Enzyme.shallow;
    Expect.expect(component) |> Expect.toMatchSnapshot;
  })
);