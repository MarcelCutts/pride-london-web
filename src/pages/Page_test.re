open Jest;

describe("Page component", () =>
  test("renders", () => {
    let component = <Page /> |> Enzyme.shallow;
    Expect.expect(component) |> Expect.toMatchSnapshot;
  })
);