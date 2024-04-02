#!/usr/bin/env node
import { fs, glob } from "zx";
import { SourceFile } from "./lib/source-file.js";
import { TypletCompiler } from "./lib/compiler.js";

let config = {};
try {
	config = await fs.readJSON("./typlet.config.json");
} catch {}
const compiler = new TypletCompiler(config);
const sources = await glob("src/**/*.typlet").then((sources) =>
	Promise.all(sources.map(SourceFile.of)),
);
compiler.addSource(...sources);
compiler.compile();