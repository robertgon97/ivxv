package ee.ivxv.key.protocol;

@SuppressWarnings("serial")
public class ProtocolException extends Exception {
    public ProtocolException(String msg) {
        super(msg);
    }

    public ProtocolException(String msg, Exception e) {
        super(msg, e);
    }
}
