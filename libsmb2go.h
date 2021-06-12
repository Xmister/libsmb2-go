#include <stdint.h>
#include <unistd.h>
#include <smb2/smb2.h>
#include <smb2/libsmb2.h>

int smb2_read_wrapper(struct smb2_context *smb2, struct smb2fh *fh, void *buf, unsigned long count, long long offset);

int smb2_write_wrapper(struct smb2_context *smb2, struct smb2fh *fh, void *buf, unsigned long count);

int64_t smb2_lseek_wrapper(struct smb2_context *smb2, struct smb2fh *fh, long long offset, int whence);
