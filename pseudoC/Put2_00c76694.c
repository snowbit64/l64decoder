// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Put2
// Entry Point: 00c76694
// Size: 452 bytes
// Signature: undefined __thiscall Put2(Grouper * this, uchar * param_1, ulong param_2, int param_3, bool param_4)


/* CryptoPP::Grouper::Put2(unsigned char const*, unsigned long, int, bool) */

ulong __thiscall
CryptoPP::Grouper::Put2(Grouper *this,uchar *param_1,ulong param_2,int param_3,bool param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  switch(*(undefined4 *)(this + 0x28)) {
  case 0:
    uVar3 = 0;
    *(undefined8 *)(this + 0x20) = 0;
    if (*(long *)(this + 0x70) == 0) goto switchD_00c766dc_caseD_3;
    while (uVar3 < param_2) {
      lVar1 = *(long *)(this + 0x78);
      if (lVar1 == *(long *)(this + 0x70)) {
switchD_00c766dc_caseD_1:
        lVar1 = Filter::Output((Filter *)this,1,*(uchar **)(this + 0x48),*(ulong *)(this + 0x40),0,
                               param_4,(basic_string *)&DEFAULT_CHANNEL);
        if (lVar1 != 0) {
          lVar1 = *(long *)(this + 0x40);
          goto LAB_00c76814;
        }
        lVar1 = 0;
        *(undefined8 *)(this + 0x78) = 0;
      }
LAB_00c7676c:
      uVar3 = param_2 - *(long *)(this + 0x20);
      uVar2 = *(long *)(this + 0x70) - lVar1;
      if (uVar3 <= (ulong)(*(long *)(this + 0x70) - lVar1)) {
        uVar2 = uVar3;
      }
      lVar1 = Filter::Output((Filter *)this,2,param_1 + *(long *)(this + 0x20),uVar2,0,param_4,
                             (basic_string *)&DEFAULT_CHANNEL);
      if (lVar1 != 0) {
        uVar2 = uVar2 - *(long *)(this + 0x20);
        goto LAB_00c76824;
      }
      uVar3 = *(long *)(this + 0x20) + uVar2;
      *(ulong *)(this + 0x20) = uVar3;
      *(ulong *)(this + 0x78) = *(long *)(this + 0x78) + uVar2;
    }
    break;
  case 1:
    goto switchD_00c766dc_caseD_1;
  case 2:
    lVar1 = *(long *)(this + 0x78);
    goto LAB_00c7676c;
  case 3:
switchD_00c766dc_caseD_3:
    lVar1 = Filter::Output((Filter *)this,3,param_1,param_2,0,param_4,
                           (basic_string *)&DEFAULT_CHANNEL);
    if (lVar1 != 0) {
      uVar2 = param_2 - *(long *)(this + 0x20);
      goto LAB_00c76824;
    }
    break;
  case 4:
    goto switchD_00c766dc_caseD_4;
  default:
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
switchD_00c766dc_caseD_4:
  lVar1 = Filter::Output((Filter *)this,4,*(uchar **)(this + 0x68),*(ulong *)(this + 0x60),param_3,
                         param_4,(basic_string *)&DEFAULT_CHANNEL);
  if (lVar1 == 0) {
    *(undefined8 *)(this + 0x78) = 0;
    return 0;
  }
  lVar1 = *(long *)(this + 0x60);
LAB_00c76814:
  uVar2 = lVar1 - *(long *)(this + 0x20);
LAB_00c76824:
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  return uVar2;
}


