module Typography = {
  open Css;
  open Colors;

  let hero = style ([
    fontFamily("Poppins"),
    fontSize(px(56)),
    fontWeight(800),
    fontStyle(`normal),
    lineHeight(1.21),
    letterSpacing(`normal),
    textAlign(`left),
    color(`hex(Colors.black))
  ]);

  let h1 = style ([
    fontFamily("Poppins"),
    fontSize(px(32)),
    fontWeight(700),
    fontStyle(`normal),
    lineHeight(1.19),
    letterSpacing(`normal),
    textAlign(`left),
    color(`hex(Colors.black))
  ]);

  let h2 = style ([
    fontFamily("Poppins"),
    fontSize(px(24)),
    fontWeight(600),
    fontStyle(`normal),
    lineHeight(1.21),
    letterSpacing(`normal),
    textAlign(`left),
    color(`hex(Colors.black))
  ]);

  let h3 = style ([
    fontFamily("Poppins"),
    fontSize(px(16)),
    fontWeight(600),
    fontStyle(`normal),
    lineHeight(1.25),
    letterSpacing(`normal),
    textAlign(`left),
    color(`hex(Colors.black))
  ]);

  let body = style ([
    fontFamily("Roboto"),
    fontSize(px(18)),
    fontWeight(400),
    fontStyle(`normal),
    lineHeight(1.5),
    letterSpacing(`normal),
    textAlign(`left),
    color(`hex(Colors.black))
  ]);

  let smallBody = style ([
    fontFamily("Roboto"),
    fontSize(px(14)),
    fontWeight(400),
    fontStyle(`normal),
    lineHeight(1.21),
    letterSpacing(`normal),
    textAlign(`left),
    color(`hex(Colors.black))
  ]);

  let finePrint = style ([
    fontFamily("Roboto"),
    fontSize(px(12)),
    fontWeight(400),
    fontStyle(`normal),
    lineHeight(1.5),
    letterSpacing(`normal),
    textAlign(`left),
    color(`hex(Colors.black))
  ]);

  let quote = style ([
    fontFamily("Poppins"),
    fontSize(px(24)),
    fontWeight(600),
    fontStyle(`italic),
    lineHeight(1.21),
    letterSpacing(`normal),
    textAlign(`left),
    color(`hex(Colors.black))
  ]);
};