export class Unreachable extends Error {
	constructor() {
		super("Unreachable");
	}
}

export class NotImplemented extends Error {
	/**
	 *
	 * @param {string} f
	 * @param {import('tree-sitter').SyntaxNode} node
	 */
	constructor(f, node) {
		super(`${f} not implemented for ${node.type}`);
	}
}
