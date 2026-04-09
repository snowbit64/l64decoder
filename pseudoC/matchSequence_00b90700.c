// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: matchSequence
// Entry Point: 00b90700
// Size: 860 bytes
// Signature: undefined __thiscall matchSequence(Preprocessor * this, char * param_1, uint * param_2)


/* Preprocessor::matchSequence(char const*, unsigned int*) */

undefined8 __thiscall Preprocessor::matchSequence(Preprocessor *this,char *param_1,uint *param_2)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  
  bVar3 = *param_1;
  uVar7 = *param_2;
  do {
    if (bVar3 == 0) {
      *param_2 = uVar7;
      return 1;
    }
    if ((bVar3 & 0x60) != 0) {
      bVar3 = getChar(this,uVar7);
      if (*param_1 != bVar3) {
        return 0;
      }
      uVar8 = uVar7 + 1;
      goto LAB_00b90764;
    }
    uVar8 = uVar7;
    switch(bVar3 & 0x1f) {
    case 1:
      uVar8 = uVar7 + 1;
      cVar4 = getChar(this,uVar7);
      if ((cVar4 != ' ') && (cVar4 != '\t')) {
LAB_00b90a38:
        if (-1 < *param_1) {
          return 0;
        }
        goto LAB_00b90764;
      }
    case 2:
      while ((cVar4 = getChar(this,uVar8), cVar4 == ' ' || (cVar4 == '\t'))) {
        uVar8 = uVar8 + 1;
      }
      break;
    case 3:
      uVar8 = uVar7 + 1;
      uVar6 = getChar(this,uVar7);
      if ((0x20 < ((uint)uVar6 & 0xff)) || ((1L << (uVar6 & 0x3f) & 0x100000600U) == 0))
      goto LAB_00b90a38;
    case 4:
      while ((uVar6 = getChar(this,uVar8), ((uint)uVar6 & 0xff) < 0x21 &&
             ((1L << (uVar6 & 0x3f) & 0x100000600U) != 0))) {
        uVar8 = uVar8 + 1;
      }
      break;
    case 5:
      bVar3 = getChar(this,uVar7);
      bVar2 = 0x19 < (byte)((bVar3 & 0xdf) + 0xbf);
      goto LAB_00b908d4;
    case 6:
      uVar8 = uVar7 + 1;
      uVar6 = getChar(this,uVar7);
      if ((0x19 < (((uint)uVar6 & 0xffffffdf) - 0x41 & 0xff)) &&
         ((0x20 < ((uint)uVar6 & 0xff) || ((1L << (uVar6 & 0x3f) & 0x100000600U) == 0))))
      goto LAB_00b90a38;
      break;
    case 7:
      cVar4 = getChar(this,uVar7);
      bVar2 = 9 < (byte)(cVar4 - 0x30U);
LAB_00b908d4:
      uVar8 = uVar7 + 1;
      uVar7 = (uint)!bVar2;
LAB_00b90970:
      if (uVar7 == *param_1 < '\0') {
        return 0;
      }
      goto LAB_00b90764;
    case 8:
      uVar6 = getChar(this,uVar7);
      uVar5 = (uint)uVar6;
      uVar8 = *(uint *)(*(long *)(this + 0x30) + (uVar6 >> 3 & 0x1c) + 0xe8);
      goto LAB_00b90964;
    case 9:
      uVar8 = uVar7 + 1;
      cVar4 = getChar(this,uVar7);
      uVar7 = (uint)(cVar4 == '\t');
      goto LAB_00b90970;
    case 10:
      if ((*(char *)(*(long *)(this + 0x38) + 0x1c) == '\0') || (uVar7 != 0)) {
        cVar4 = getChar(this,uVar7);
        if (cVar4 == '\0') {
          uVar7 = (uint)(((byte *)param_1)[1] == 0);
          goto LAB_00b90970;
        }
        if (cVar4 != '\n') goto LAB_00b90a38;
        uVar8 = uVar7 + 1;
      }
      else {
        uVar8 = 0;
      }
      break;
    case 0xb:
      uVar6 = getChar(this,uVar7);
      uVar5 = (uint)uVar6;
      uVar8 = *(uint *)(*(long *)(this + 0x30) + (uVar6 >> 3 & 0x1c) + 0xa8);
LAB_00b90964:
      uVar7 = uVar8 >> (ulong)(uVar5 & 0x1f) & 1;
      uVar8 = uVar7 + 1;
      goto LAB_00b90970;
    case 0xc:
      uVar6 = getChar(this,uVar7);
      lVar1 = *(long *)(this + 0x30) + (uVar6 >> 5 & 7) * 4;
      uVar7 = 1 << (ulong)((uint)uVar6 & 0x1f);
      uVar8 = uVar7 + 1;
      if ((uVar7 & *(uint *)(lVar1 + 200)) == 0) {
        uVar7 = (uint)((*(uint *)(lVar1 + 0xa8) & uVar7) != 0);
        goto LAB_00b90970;
      }
    }
    if (*param_1 < '\0') {
      return 0;
    }
LAB_00b90764:
    param_1 = (char *)((byte *)param_1 + 1);
    bVar3 = *param_1;
    uVar7 = uVar8;
  } while( true );
}


