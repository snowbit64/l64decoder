// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_host_create
// Entry Point: 00d27464
// Size: 676 bytes
// Signature: undefined enet_host_create(void)


int * enet_host_create(undefined8 *param_1,ulong param_2,long param_3,int param_4,int param_5)

{
  long lVar1;
  int iVar2;
  int *__s;
  void *__s_00;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (param_2 < 0x1fff) {
    __s = (int *)enet_malloc(0x2b20);
    if (__s == (int *)0x0) {
      return (int *)0x0;
    }
    memset(__s,0,0x2b20);
    __s_00 = (void *)enet_malloc(param_2 * 0x1d0);
    *(void **)(__s + 10) = __s_00;
    if (__s_00 != (void *)0x0) {
      memset(__s_00,0,param_2 * 0x1d0);
      uVar3 = enet_socket_create(2);
      *__s = (int)uVar3;
      if ((int)uVar3 != -1) {
        if (param_1 == (undefined8 *)0x0) {
          enet_socket_set_option(uVar3,1,1);
          enet_socket_set_option(*__s,2,1);
          enet_socket_set_option(*__s,3,0x40000);
          enet_socket_set_option(*__s,4,0x40000);
LAB_00d275a4:
          lVar5 = 0xff;
          if (0xffffffffffffff00 < param_3 - 0x100U) {
            lVar5 = param_3;
          }
          __s[7] = (int)__s;
          iVar2 = enet_host_random_seed();
          __s[3] = param_4;
          __s[4] = param_5;
          *(ulong *)(__s + 0xc) = param_2;
          *(long *)(__s + 0xe) = lVar5;
          *(undefined8 *)(__s + 5) = 0x57800000000;
          *(undefined8 *)(__s + 0x2a8) = 0;
          *(undefined8 *)(__s + 0x2a6) = 0;
          *(undefined8 *)(__s + 0x19c) = 0;
          __s[7] = (uint)(__s[7] + iVar2) >> 0x10 | (__s[7] + iVar2) * 0x10000;
          __s[8] = 0;
          __s[0xab2] = 0;
          *(undefined2 *)(__s + 0xab3) = 0;
          *(undefined8 *)(__s + 0xac0) = 0;
          *(undefined8 *)(__s + 0xabe) = 0;
          *(undefined8 *)(__s + 0xab6) = 0;
          *(undefined8 *)(__s + 0xab4) = 0;
          *(undefined8 *)(__s + 0xaba) = 0;
          *(undefined8 *)(__s + 0xab8) = 0;
          *(undefined8 *)(__s + 0xac4) = 0x2000000;
          *(undefined8 *)(__s + 0xac2) = 0x1ffe;
          *(undefined8 *)(__s + 0xac6) = 0x2000000;
          *(undefined8 *)(__s + 0xabc) = 0;
          *(undefined8 *)(__s + 0x2ac) = 0;
          *(undefined8 *)(__s + 0x2aa) = 0;
          *(undefined8 *)(__s + 0x2b0) = 0;
          *(undefined8 *)(__s + 0x2ae) = 0;
          enet_list_clear(__s + 0x12);
          if (*(long *)(__s + 0xc) < 1) {
            return __s;
          }
          lVar6 = *(long *)(__s + 10);
          lVar5 = 0;
          lVar4 = lVar6;
          do {
            lVar1 = lVar6 + lVar5;
            *(int **)(lVar1 + 0x10) = __s;
            *(undefined2 *)(lVar1 + 0x20) = 0xffff;
            *(undefined8 *)(lVar1 + 0x30) = 0;
            *(short *)(lVar1 + 0x1a) = (short)((uint)((int)lVar1 - (int)lVar4) >> 4) * -0x3dcb;
            enet_list_clear(lVar1 + 0xe0);
            enet_list_clear(lVar1 + 0xf0);
            enet_list_clear(lVar1 + 0x100);
            enet_list_clear(lVar1 + 0x110);
            enet_list_clear(lVar1 + 0x120);
            enet_peer_reset(lVar1);
            lVar4 = *(long *)(__s + 10);
            lVar5 = lVar5 + 0x1d0;
          } while ((ulong)(lVar6 + lVar5) < (ulong)(lVar4 + *(long *)(__s + 0xc) * 0x1d0));
          return __s;
        }
        iVar2 = enet_socket_bind(uVar3,param_1);
        if (-1 < iVar2) {
          enet_socket_set_option(*__s,1,1);
          enet_socket_set_option(*__s,2,1);
          enet_socket_set_option(*__s,3,0x40000);
          enet_socket_set_option(*__s,4,0x40000);
          iVar2 = enet_socket_get_address(*__s,__s + 1);
          if (iVar2 < 0) {
            *(undefined8 *)(__s + 1) = *param_1;
          }
          goto LAB_00d275a4;
        }
        if (*__s != -1) {
          enet_socket_destroy();
        }
      }
      enet_free(*(void **)(__s + 10));
    }
    enet_free(__s);
  }
  return (int *)0x0;
}


