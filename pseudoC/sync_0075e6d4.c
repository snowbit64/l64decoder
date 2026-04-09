// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sync
// Entry Point: 0075e6d4
// Size: 496 bytes
// Signature: undefined sync(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__ndk1::basic_filebuf<char, std::__ndk1::char_traits<char> >::sync() */

undefined4 std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::sync(void)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  long *in_x0;
  size_t sVar5;
  undefined4 uVar6;
  long lVar7;
  size_t __n;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (in_x0[0xf] != 0) {
    if ((long *)in_x0[0x10] == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0075edd0();
    }
    if ((*(uint *)((long)in_x0 + 0x9c) >> 4 & 1) == 0) {
      if ((*(uint *)((long)in_x0 + 0x9c) >> 3 & 1) != 0) {
        local_50 = in_x0[0x12];
        if (*(char *)((long)in_x0 + 0xa2) == '\0') {
          uVar3 = (**(code **)(*(long *)in_x0[0x10] + 0x30))();
          lVar7 = in_x0[10] - in_x0[9];
          if ((int)uVar3 < 1) {
            if (in_x0[3] == in_x0[4]) {
              bVar2 = false;
            }
            else {
              iVar4 = (**(code **)(*(long *)in_x0[0x10] + 0x40))
                                ((long *)in_x0[0x10],&local_50,in_x0[8],in_x0[9],in_x0[3] - in_x0[2]
                                );
              bVar2 = true;
              lVar7 = (lVar7 + in_x0[9]) - (in_x0[8] + (long)iVar4);
            }
          }
          else {
            bVar2 = false;
            lVar7 = lVar7 + (in_x0[4] - in_x0[3]) * (ulong)uVar3;
          }
        }
        else {
          bVar2 = false;
          lVar7 = in_x0[4] - in_x0[3];
        }
        iVar4 = fseeko((FILE *)in_x0[0xf],-lVar7,1);
        if (iVar4 != 0) goto LAB_0075e864;
        if (bVar2) {
          in_x0[0x11] = local_50;
        }
        *(undefined4 *)((long)in_x0 + 0x9c) = 0;
        in_x0[3] = 0;
        in_x0[4] = 0;
        in_x0[2] = 0;
        in_x0[9] = in_x0[8];
        in_x0[10] = in_x0[8];
      }
    }
    else {
      if (in_x0[6] != in_x0[5]) {
        uVar6 = 0xffffffff;
        iVar4 = (**(code **)(*in_x0 + 0x68))();
        if (iVar4 == -1) goto LAB_0075e890;
      }
      do {
        iVar4 = (**(code **)(*(long *)in_x0[0x10] + 0x28))
                          ((long *)in_x0[0x10],in_x0 + 0x11,in_x0[8],in_x0[8] + in_x0[0xc],&local_50
                          );
        __n = local_50 - (long)(void *)in_x0[8];
        sVar5 = fwrite((void *)in_x0[8],1,__n,(FILE *)in_x0[0xf]);
        if (sVar5 != __n) goto LAB_0075e864;
      } while (iVar4 == 1);
      if ((iVar4 == 2) || (iVar4 = fflush((FILE *)in_x0[0xf]), iVar4 != 0)) {
LAB_0075e864:
        uVar6 = 0xffffffff;
        goto LAB_0075e890;
      }
    }
  }
  uVar6 = 0;
LAB_0075e890:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}


