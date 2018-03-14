open Jest;

describe("Goodbye component", () =>
  Expect.(
    test("renders a message", () => {
      let name = "test";
      let component = <Goodbye name /> |> Enzyme.shallow;
      let expectedResult = "Goodbye test";
      expect(component |> Enzyme.text) |> toEqual(expectedResult);
    })
  )
);