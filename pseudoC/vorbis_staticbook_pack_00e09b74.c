// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_staticbook_pack
// Entry Point: 00e09b74
// Size: 948 bytes
// Signature: undefined vorbis_staticbook_pack(void)


undefined8 vorbis_staticbook_pack(long *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  
  oggpack_write(param_2,&DAT_00564342,0x18);
  oggpack_write(param_2,*param_1,0x10);
  oggpack_write(param_2,param_1[1],0x18);
  lVar5 = param_1[1];
  if (lVar5 < 2) {
    lVar6 = 1;
LAB_00e09c04:
    if (lVar6 != lVar5) {
      oggpack_write(param_2,0,1);
      lVar5 = param_1[1];
      if (lVar5 < 1) {
        lVar6 = 0;
LAB_00e09d38:
        if (lVar6 != lVar5) {
          oggpack_write(param_2,1,1);
          if (0 < param_1[1]) {
            lVar5 = 0;
            do {
              while (*(char *)(param_1[2] + lVar5) == '\0') {
                oggpack_write(param_2,0,1);
                lVar5 = lVar5 + 1;
                if (param_1[1] <= lVar5) goto LAB_00e09e14;
              }
              oggpack_write(param_2,1,1);
              oggpack_write(param_2,(ulong)*(byte *)(param_1[2] + lVar5) - 1,5);
              lVar5 = lVar5 + 1;
            } while (lVar5 < param_1[1]);
          }
          goto LAB_00e09e14;
        }
      }
      else {
        lVar6 = 0;
        do {
          if (*(char *)(param_1[2] + lVar6) == '\0') goto LAB_00e09d38;
          lVar6 = lVar6 + 1;
        } while (lVar5 != lVar6);
      }
      oggpack_write(param_2,0,1);
      if (0 < param_1[1]) {
        lVar5 = 0;
        do {
          oggpack_write(param_2,(ulong)*(byte *)(param_1[2] + lVar5) - 1,5);
          lVar5 = lVar5 + 1;
        } while (lVar5 < param_1[1]);
      }
      goto LAB_00e09e14;
    }
  }
  else {
    lVar6 = 1;
    bVar8 = *(byte *)param_1[2];
    do {
      if ((bVar8 == 0) || (bVar1 = ((byte *)param_1[2])[lVar6], bVar1 < bVar8)) goto LAB_00e09c04;
      lVar6 = lVar6 + 1;
      bVar8 = bVar1;
    } while (lVar5 != lVar6);
  }
  lVar5 = 1;
  oggpack_write(param_2,1,1);
  oggpack_write(param_2,(ulong)*(byte *)param_1[2] - 1,5);
  lVar6 = param_1[1];
  if (lVar6 < 2) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    lVar5 = 1;
    do {
      bVar8 = *(byte *)(param_1[2] + lVar5);
      bVar1 = ((byte *)(param_1[2] + lVar5))[-1];
      if (bVar1 < bVar8) {
        uVar2 = ov_ilog((int)lVar6 - (int)lVar7);
        oggpack_write(param_2,lVar5 - lVar7,uVar2);
        if ((ulong)bVar1 + 1 != (ulong)bVar8) {
          lVar6 = ~(ulong)bVar1 + (ulong)bVar8;
          do {
            uVar2 = ov_ilog(*(int *)(param_1 + 1) - (int)lVar5);
            oggpack_write(param_2,0,uVar2);
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
        lVar6 = param_1[1];
        lVar7 = lVar5;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < lVar6);
  }
  uVar2 = ov_ilog((int)lVar6 - (int)lVar7);
  oggpack_write(param_2,lVar5 - lVar7,uVar2);
LAB_00e09e14:
  oggpack_write(param_2,(long)*(int *)(param_1 + 3),4);
  if (*(int *)(param_1 + 3) - 1U < 2) {
    if (param_1[7] == 0) {
      return 0xffffffff;
    }
    oggpack_write(param_2,param_1[4],0x20);
    oggpack_write(param_2,param_1[5],0x20);
    oggpack_write(param_2,(long)*(int *)(param_1 + 6) + -1,4);
    oggpack_write(param_2,(long)*(int *)((long)param_1 + 0x34),1);
    if (*(int *)(param_1 + 3) == 2) {
      uVar4 = *param_1 * param_1[1];
      iVar3 = (int)uVar4;
    }
    else {
      if (*(int *)(param_1 + 3) != 1) {
        return 0;
      }
      uVar4 = _book_maptype1_quantvals(param_1);
      iVar3 = (int)uVar4;
    }
    if (0 < iVar3) {
      uVar4 = uVar4 & 0xffffffff;
      lVar5 = 0;
      if (uVar4 < 2) {
        uVar4 = 1;
      }
      do {
        lVar7 = *(long *)(param_1[7] + lVar5);
        lVar6 = -lVar7;
        if (-1 < lVar7) {
          lVar6 = lVar7;
        }
        oggpack_write(param_2,lVar6,*(undefined4 *)(param_1 + 6));
        lVar5 = lVar5 + 8;
      } while (uVar4 * 8 - lVar5 != 0);
    }
  }
  else if (*(int *)(param_1 + 3) != 0) {
    return 0xffffffff;
  }
  return 0;
}


