// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Put2
// Entry Point: 00c75910
// Size: 644 bytes
// Signature: undefined __thiscall Put2(BaseN_Encoder * this, uchar * param_1, ulong param_2, int param_3, bool param_4)


/* CryptoPP::BaseN_Encoder::Put2(unsigned char const*, unsigned long, int, bool) */

ulong __thiscall
CryptoPP::BaseN_Encoder::Put2
          (BaseN_Encoder *this,uchar *param_1,ulong param_2,int param_3,bool param_4)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar3 = *(int *)(this + 0x28);
  if (iVar3 == 0) {
    uVar4 = 0;
    *(undefined8 *)(this + 0x20) = 0;
    goto LAB_00c759a8;
  }
  if (iVar3 == 1) {
    while (lVar2 = Filter::Output((Filter *)this,1,*(uchar **)(this + 0x68),
                                  (long)*(int *)(this + 0x40),0,param_4,
                                  (basic_string *)&DEFAULT_CHANNEL), lVar2 == 0) {
      *(undefined4 *)(this + 0x44) = 0;
      *(undefined4 *)(this + 0x48) = 0;
      do {
        uVar4 = *(ulong *)(this + 0x20);
LAB_00c759a8:
        if (param_2 <= uVar4) {
          if (param_3 == 0) {
            return 0;
          }
          uVar7 = *(uint *)(this + 0x44);
          if (0 < *(int *)(this + 0x48)) {
            uVar7 = uVar7 + 1;
            *(uint *)(this + 0x44) = uVar7;
          }
          if (0 < (int)uVar7) {
            lVar2 = 0;
            do {
              *(undefined *)(*(long *)(this + 0x68) + lVar2) =
                   *(undefined *)
                    (*(long *)(this + 0x30) + (ulong)*(byte *)(*(long *)(this + 0x68) + lVar2));
              lVar2 = lVar2 + 1;
              uVar7 = *(uint *)(this + 0x44);
            } while (lVar2 < (int)uVar7);
            if ((*(int *)(this + 0x38) != -1) && (0 < (int)uVar7)) {
              memset((void *)(*(long *)(this + 0x68) + (ulong)uVar7),*(int *)(this + 0x38),
                     (long)*(int *)(this + 0x40) - (long)(int)uVar7);
              uVar7 = *(uint *)(this + 0x40);
              *(uint *)(this + 0x44) = uVar7;
            }
          }
          goto LAB_00c75954;
        }
        iVar3 = *(int *)(this + 0x44);
        if (iVar3 == 0) {
          memset(*(void **)(this + 0x68),0,(long)*(int *)(this + 0x40));
          iVar3 = *(int *)(this + 0x44);
        }
        lVar2 = *(long *)(this + 0x20);
        *(long *)(this + 0x20) = lVar2 + 1;
        uVar7 = (uint)param_1[lVar2];
        uVar5 = *(int *)(this + 0x3c) - *(int *)(this + 0x48);
        uVar6 = 8;
        *(byte *)(*(long *)(this + 0x68) + (long)iVar3) =
             *(byte *)(*(long *)(this + 0x68) + (long)iVar3) |
             param_1[lVar2] >> (ulong)(8 - uVar5 & 0x1f);
        if (uVar5 < 9) {
          uVar6 = 8;
          do {
            uVar6 = uVar6 - uVar5;
            uVar4 = (long)*(int *)(this + 0x44) + 1;
            *(int *)(this + 0x44) = (int)uVar4;
            *(undefined4 *)(this + 0x48) = 0;
            if (uVar6 == 0) goto LAB_00c75a64;
            uVar1 = uVar5 & 0x1f;
            uVar5 = *(uint *)(this + 0x3c);
            uVar7 = uVar7 << (ulong)uVar1 & 0xff;
            *(byte *)(*(long *)(this + 0x68) + uVar4) =
                 *(byte *)(*(long *)(this + 0x68) + uVar4) |
                 (byte)(uVar7 >> (ulong)(8 - uVar5 & 0x1f));
          } while (uVar5 <= uVar6);
        }
        uVar4 = (ulong)*(uint *)(this + 0x44);
        *(uint *)(this + 0x48) = *(int *)(this + 0x48) + uVar6;
LAB_00c75a64:
      } while ((int)uVar4 != *(int *)(this + 0x40));
      if (0 < (int)uVar4) {
        lVar2 = 0;
        do {
          *(undefined *)(*(long *)(this + 0x68) + lVar2) =
               *(undefined *)
                (*(long *)(this + 0x30) + (ulong)*(byte *)(*(long *)(this + 0x68) + lVar2));
          lVar2 = lVar2 + 1;
        } while (lVar2 < *(int *)(this + 0x44));
      }
    }
    iVar3 = *(int *)(this + 0x40);
  }
  else {
    if (iVar3 != 2) {
      return 0;
    }
    uVar7 = *(uint *)(this + 0x44);
LAB_00c75954:
    lVar2 = Filter::Output((Filter *)this,2,*(uchar **)(this + 0x68),(long)(int)uVar7,param_3,
                           param_4,(basic_string *)&DEFAULT_CHANNEL);
    if (lVar2 == 0) {
      *(undefined4 *)(this + 0x44) = 0;
      *(undefined4 *)(this + 0x48) = 0;
      return 0;
    }
    iVar3 = *(int *)(this + 0x44);
  }
  uVar4 = (long)iVar3 - *(long *)(this + 0x20);
  if (uVar4 < 2) {
    uVar4 = 1;
  }
  return uVar4;
}


