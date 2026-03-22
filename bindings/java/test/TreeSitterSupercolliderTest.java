import io.github.treesitter.jtreesitter.Language;
import io.github.treesitter.jtreesitter.supercollider.TreeSitterSupercollider;
import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.assertDoesNotThrow;

public class TreeSitterSupercolliderTest {
    @Test
    public void testCanLoadLanguage() {
        assertDoesNotThrow(() -> new Language(TreeSitterSupercollider.language()));
    }
}
