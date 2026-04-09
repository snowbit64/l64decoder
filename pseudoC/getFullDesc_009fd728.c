// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFullDesc
// Entry Point: 009fd728
// Size: 592 bytes
// Signature: undefined __cdecl getFullDesc(uint param_1, uint param_2, char * param_3, char * param_4)


/* LightList::getFullDesc(unsigned int, unsigned int, char const*, char*) */

void LightList::getFullDesc(uint param_1,uint param_2,char *param_3,char *param_4)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  
  uVar7 = 0x2a;
  uVar5 = 0x21;
  if (((param_1 ^ param_2) & 1) == 0) {
    uVar5 = uVar7;
  }
  puVar1 = &DAT_004d201a;
  if ((param_1 & 1) == 0) {
    puVar1 = &DAT_004e87ae;
  }
  iVar3 = FUN_009fd978(param_4,0xffffffffffffffff,"%s%c Use shadow map: %s\n",param_3,uVar5,puVar1);
  uVar2 = param_1 >> 1 & 7;
  pcVar6 = param_4 + iVar3;
  if ((uVar2 | param_2 & 0xe) != 0) {
    if (uVar2 != (param_2 >> 1 & 7)) {
      uVar7 = 0x21;
    }
    iVar3 = FUN_009fd978(pcVar6,0xffffffffffffffff,"%s%c %u dir lights\n",param_3,uVar7);
    pcVar6 = pcVar6 + iVar3;
  }
  uVar2 = param_1 >> 4 & 7;
  if ((param_2 & 0x70 | param_1 >> 4 & 7) != 0) {
    uVar5 = 0x2a;
    if (uVar2 != (param_2 >> 4 & 7)) {
      uVar5 = 0x21;
    }
    iVar3 = FUN_009fd978(pcVar6,0xffffffffffffffff,"%s%c %u dir shadow lights\n",param_3,uVar5,uVar2
                        );
    pcVar6 = pcVar6 + iVar3;
  }
  if (uVar2 != 0) {
    puVar1 = &DAT_004e87ae;
    if ((param_1 & 0x80) != 0) {
      puVar1 = &DAT_004d201a;
    }
    iVar3 = FUN_009fd978(pcVar6,0xffffffffffffffff,"%s* shadow map %u: focus box %s\n",param_3,1,
                         puVar1);
    if (uVar2 != 1) {
      pcVar6 = pcVar6 + iVar3;
      puVar1 = &DAT_004e87ae;
      if ((param_1 & 0x100) != 0) {
        puVar1 = &DAT_004d201a;
      }
      iVar3 = FUN_009fd978(pcVar6,0xffffffffffffffff,"%s* shadow map %u: focus box %s\n",param_3,2,
                           puVar1);
      if (uVar2 != 2) {
        pcVar6 = pcVar6 + iVar3;
        puVar1 = &DAT_004e87ae;
        if ((param_1 & 0x200) != 0) {
          puVar1 = &DAT_004d201a;
        }
        iVar3 = FUN_009fd978(pcVar6,0xffffffffffffffff,"%s* shadow map %u: focus box %s\n",param_3,3
                             ,puVar1);
        if (uVar2 != 3) {
          pcVar6 = pcVar6 + iVar3;
          puVar1 = &DAT_004e87ae;
          if ((param_1 & 0x400) != 0) {
            puVar1 = &DAT_004d201a;
          }
          iVar3 = FUN_009fd978(pcVar6,0xffffffffffffffff,"%s* shadow map %u: focus box %s\n",param_3
                               ,4,puVar1);
          if (uVar2 != 4) {
            pcVar6 = pcVar6 + iVar3;
            puVar1 = &DAT_004e87ae;
            if ((param_1 & 0x800) != 0) {
              puVar1 = &DAT_004d201a;
            }
            iVar3 = FUN_009fd978(pcVar6,0xffffffffffffffff,"%s* shadow map %u: focus box %s\n",
                                 param_3,5,puVar1);
            if (uVar2 != 5) {
              puVar1 = &DAT_004e87ae;
              if ((param_1 & 0x1000) != 0) {
                puVar1 = &DAT_004d201a;
              }
              iVar4 = FUN_009fd978(pcVar6 + iVar3,0xffffffffffffffff,
                                   "%s* shadow map %u: focus box %s\n",param_3,6,puVar1);
              if (uVar2 != 6) {
                puVar1 = &DAT_004e87ae;
                if ((param_1 & 0x2000) != 0) {
                  puVar1 = &DAT_004d201a;
                }
                FUN_009fd978(pcVar6 + iVar3 + iVar4,0xffffffffffffffff,
                             "%s* shadow map %u: focus box %s\n",param_3,7,puVar1);
              }
            }
          }
        }
      }
    }
  }
  return;
}


