// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFlagsDesc
// Entry Point: 00a51038
// Size: 444 bytes
// Signature: undefined __cdecl getFlagsDesc(uint param_1, uint param_2, char * param_3, char * param_4)


/* WARNING: Type propagation algorithm not settling */
/* GsShape::getFlagsDesc(unsigned int, unsigned int, char const*, char*) */

void GsShape::getFlagsDesc(uint param_1,uint param_2,char *param_3,char *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  
  if ((param_1 == 0x13) || (param_2 == 0x13)) {
    uVar6 = 0x2a;
    if (param_2 != 0x13) {
      uVar6 = 0x2b;
    }
    if (param_1 != 0x13) {
      uVar6 = 0x2d;
    }
    FUN_00a511f4(param_4,0xffffffffffffffff,"%s%c VALUE_SHAPEHASH_TILESHADER\n",param_3,uVar6);
  }
  else {
    uVar3 = param_2 | param_1;
    if ((uVar3 & 1) != 0) {
      uVar1 = 0x2d;
      if ((param_1 & 1) != 0) {
        uVar1 = param_2 & 1 ^ 0x2b;
      }
      iVar4 = FUN_00a511f4(param_4,0xffffffffffffffff,"%s%c FLAG_SKINNING\n",param_3,uVar1);
      param_4 = param_4 + iVar4;
    }
    if ((uVar3 >> 1 & 1) != 0) {
      uVar6 = 0x2a;
      if ((param_2 & 2) == 0) {
        uVar6 = 0x2b;
      }
      uVar2 = 0x2d;
      if ((param_1 & 2) != 0) {
        uVar2 = uVar6;
      }
      iVar4 = FUN_00a511f4(param_4,0xffffffffffffffff,"%s%c FLAG_SKINNING_SINGLE_WEIGHT\n",param_3,
                           uVar2);
      param_4 = param_4 + iVar4;
    }
    if ((uVar3 >> 5 & 1) != 0) {
      uVar6 = 0x2a;
      if ((param_2 & 0x20) == 0) {
        uVar6 = 0x2b;
      }
      uVar2 = 0x2d;
      if ((param_1 & 0x20) != 0) {
        uVar2 = uVar6;
      }
      iVar4 = FUN_00a511f4(param_4,0xffffffffffffffff,"%s%c FLAG_VIRTUAL_TEXTURE\n",param_3,uVar2);
      param_4 = param_4 + iVar4;
    }
    if ((uVar3 >> 6 & 1) != 0) {
      uVar6 = 0x2a;
      if ((param_2 & 0x40) == 0) {
        uVar6 = 0x2b;
      }
      uVar2 = 0x2d;
      if ((param_1 & 0x40) != 0) {
        uVar2 = uVar6;
      }
      iVar4 = FUN_00a511f4(param_4,0xffffffffffffffff,"%s%c FLAG_DOUBLE_SIDED\n",param_3,uVar2);
      param_4 = param_4 + iVar4;
    }
    uVar3 = param_1 >> 2 & 7;
    if (uVar3 < 6) {
      pcVar5 = (&Geometry::s_shaderTypeNames)[uVar3];
    }
    else {
      pcVar5 = "INVALID";
    }
    uVar6 = 0x2a;
    if (uVar3 != (param_2 >> 2 & 7)) {
      uVar6 = 0x2b;
    }
    FUN_00a511f4(param_4,0xffffffffffffffff,"%s%c GEOMETRY_%s\n",param_3,uVar6,pcVar5);
  }
  return;
}


