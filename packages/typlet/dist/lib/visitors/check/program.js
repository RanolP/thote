/**
 * @type {import('../types.js').Visitor<void>}
 */
export function visitProgram(env, ast) {
	const q = [ast];
	while (true) {
		const e = q.shift();
		if (!e) break;
		if (e.isError)
			throw new Error(
				`syntax error at ${env.file.path}:${e.startPosition.row + 1}:${
					e.startPosition.column + 1
				} while parsing "${e.parent?.type}"`,
			);
		q.push(...e.children);
	}
}
