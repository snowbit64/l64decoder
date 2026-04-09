// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Put2
// Entry Point: 00c75f14
// Size: 548 bytes
// Signature: undefined __thiscall Put2(BaseN_Decoder * this, uchar * param_1, ulong param_2, int param_3, bool param_4)


/* CryptoPP::BaseN_Decoder::Put2(unsigned char const*, unsigned long, int, bool) */

ulong __thiscall
CryptoPP::BaseN_Decoder::Put2
          (BaseN_Decoder *this,uchar *param_1,ulong param_2,int param_3,bool param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  
  iVar7 = *(int *)(this + 0x28);
  if (iVar7 == 0) {
    uVar6 = 0;
    *(undefined8 *)(this + 0x20) = 0;
    goto LAB_00c75f64;
  }
  if (iVar7 == 2) {
LAB_00c76000:
    lVar4 = Filter::Output((Filter *)this,2,*(uchar **)(this + 0x60),(long)*(int *)(this + 0x40),
                           param_3,param_4,(basic_string *)&DEFAULT_CHANNEL);
    if (lVar4 == 0) {
      *(undefined8 *)(this + 0x40) = 0;
      return 0;
    }
    iVar7 = *(int *)(this + 0x40);
  }
  else {
    if (iVar7 != 1) {
      return 0;
    }
    iVar7 = *(int *)(this + 0x3c);
LAB_00c760e4:
    lVar4 = Filter::Output((Filter *)this,1,*(uchar **)(this + 0x60),(long)iVar7,0,param_4,
                           (basic_string *)&DEFAULT_CHANNEL);
    if (lVar4 == 0) {
      *(undefined8 *)(this + 0x40) = 0;
      do {
        while( true ) {
          uVar6 = *(ulong *)(this + 0x20);
LAB_00c75f64:
          do {
            if (param_2 <= uVar6) {
              if (param_3 == 0) {
                return 0;
              }
              goto LAB_00c76000;
            }
            *(ulong *)(this + 0x20) = uVar6 + 1;
            uVar3 = *(uint *)(*(long *)(this + 0x30) + (ulong)param_1[uVar6] * 4);
            uVar6 = uVar6 + 1;
          } while (0xff < uVar3);
          uVar5 = *(uint *)(this + 0x44);
          if ((*(uint *)(this + 0x40) | uVar5) == 0) {
            memset(*(void **)(this + 0x60),0,(long)*(int *)(this + 0x3c));
            uVar5 = *(uint *)(this + 0x44);
          }
          iVar1 = *(int *)(this + 0x38) + uVar5;
          if (iVar1 < 9) break;
          *(byte *)(*(long *)(this + 0x60) + (long)*(int *)(this + 0x40)) =
               *(byte *)(*(long *)(this + 0x60) + (long)*(int *)(this + 0x40)) |
               (byte)(uVar3 >> (ulong)(iVar1 - 8U & 0x1f));
          *(byte *)((long)*(int *)(this + 0x40) + *(long *)(this + 0x60) + 1) =
               *(byte *)((long)*(int *)(this + 0x40) + *(long *)(this + 0x60) + 1) |
               (byte)(uVar3 << (ulong)(0x10U - iVar1 & 0x1f));
          iVar7 = *(int *)(this + 0x40);
LAB_00c760ac:
          iVar2 = iVar1;
          if (0xe < iVar1) {
            iVar2 = 0xf;
          }
          uVar3 = (iVar1 - iVar2) + 7;
          iVar7 = iVar7 + (uVar3 >> 3) + 1;
          *(int *)(this + 0x40) = iVar7;
          *(uint *)(this + 0x44) = (iVar1 - (uVar3 & 0xfffffff8)) + -8;
          if (iVar7 == *(int *)(this + 0x3c)) goto LAB_00c760e4;
        }
        *(byte *)(*(long *)(this + 0x60) + (long)*(int *)(this + 0x40)) =
             *(byte *)(*(long *)(this + 0x60) + (long)*(int *)(this + 0x40)) |
             (byte)(uVar3 << (ulong)(8U - iVar1 & 0x1f));
        iVar7 = *(int *)(this + 0x40);
        *(int *)(this + 0x44) = iVar1;
        if (iVar1 == 8) goto LAB_00c760ac;
      } while (iVar7 != *(int *)(this + 0x3c));
      goto LAB_00c760e4;
    }
    iVar7 = *(int *)(this + 0x3c);
  }
  uVar6 = (long)iVar7 - *(long *)(this + 0x20);
  if (uVar6 < 2) {
    uVar6 = 1;
  }
  return uVar6;
}


