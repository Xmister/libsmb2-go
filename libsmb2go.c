#include "libsmb2go.h"

int smb2_read_wrapper(struct smb2_context *smb2, struct smb2fh *fh, void *buf, unsigned long count, long long offset) {
	return smb2_pread(smb2, fh, (uint8_t*) buf, count, offset);
}

int smb2_write_wrapper(struct smb2_context *smb2, struct smb2fh *fh, void *buf, unsigned long count) {
	return smb2_write(smb2, fh, (uint8_t*) buf, count);
}

int64_t smb2_lseek_wrapper(struct smb2_context *smb2, struct smb2fh *fh, long long offset, int whence) {
	return smb2_lseek(smb2, fh, offset, whence, NULL);
}