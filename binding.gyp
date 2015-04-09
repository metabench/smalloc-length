{
  "targets": [
    {
      "target_name": "smalloc-length",
      "sources": [ "smalloc-length.cc" ],
      "include_dirs": [
        "<!(node -e \"require('nan')\")"
      ]
    }
  ]
}
