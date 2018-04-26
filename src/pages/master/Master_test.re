open Jest;

describe("Master component", () => {
  test("Creates URL string from single path entry", () => {
    let path = ["mockpath"];
    let expectedResult = "mockpath/";
    Expect.expect(Master.generateUrlPathString(path))
    |> Expect.toEqual(expectedResult);
  });
  test("Creates URL string from multiple path entry", () => {
    let path = ["mockpath", "firstitem", "detail"];
    let expectedResult = "mockpath/firstitem/detail/";
    Expect.expect(Master.generateUrlPathString(path))
    |> Expect.toEqual(expectedResult);
  });
});
