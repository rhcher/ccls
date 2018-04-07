struct Foo {
  void Used();
};

void user() {
  auto x = &Foo::Used;
}


/*
OUTPUT:
{
  "includes": [],
  "skipped_by_preprocessor": [],
  "types": [{
      "id": 0,
      "usr": 15041163540773201510,
      "detailed_name": "Foo",
      "qual_name_offset": 0,
      "short_name": "Foo",
      "kind": 23,
      "declarations": [],
      "spell": "1:8-1:11|-1|1|2",
      "extent": "1:1-3:2|-1|1|0",
      "bases": [],
      "derived": [],
      "types": [],
      "funcs": [0],
      "vars": [],
      "instances": [],
      "uses": ["6:13-6:16|-1|1|4"]
    }],
  "funcs": [{
      "id": 0,
      "usr": 18417145003926999463,
      "detailed_name": "void Foo::Used()",
      "qual_name_offset": 5,
      "short_name": "Used",
      "kind": 6,
      "storage": 1,
      "declarations": [{
          "spell": "2:8-2:12|0|2|1",
          "param_spellings": []
        }],
      "declaring_type": 0,
      "bases": [],
      "derived": [],
      "vars": [],
      "uses": ["6:18-6:22|1|3|32"],
      "callees": []
    }, {
      "id": 1,
      "usr": 9376923949268137283,
      "detailed_name": "void user()",
      "qual_name_offset": 5,
      "short_name": "user",
      "kind": 12,
      "storage": 1,
      "declarations": [],
      "spell": "5:6-5:10|-1|1|2",
      "extent": "5:1-7:2|-1|1|0",
      "bases": [],
      "derived": [],
      "vars": [0],
      "uses": [],
      "callees": ["6:18-6:22|0|3|32", "6:18-6:22|0|3|32"]
    }],
  "vars": [{
      "id": 0,
      "usr": 4636142131003982569,
      "detailed_name": "void (Foo::*)() x",
      "qual_name_offset": 16,
      "short_name": "x",
      "declarations": [],
      "spell": "6:8-6:9|1|3|2",
      "extent": "6:3-6:22|1|3|0",
      "uses": [],
      "kind": 13,
      "storage": 1
    }]
}
*/