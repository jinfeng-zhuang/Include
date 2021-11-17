#ifndef XG9900_NETWORK_H
#define XG9900_NETWORK_H

extern int xg9900_network_init(void);
extern void xg9900_network_deinit(void);

extern int xg9900_connect(void);
extern int xg9900_disconnect(void);

extern int xg9900_send(u8 *buf, s32 len);
extern int xg9900_recv(u8 *buf, s32 len);

#endif
