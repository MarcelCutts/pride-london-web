open Jest;

describe("Help page", () =>
  test("renders", () => {
    let component = <Help /> |> Enzyme.shallow;
    Expect.expect(Enzyme.length(component)) |> Expect.toBe(1);
  })
);