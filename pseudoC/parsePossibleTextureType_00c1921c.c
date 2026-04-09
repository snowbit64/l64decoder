// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parsePossibleTextureType
// Entry Point: 00c1921c
// Size: 1008 bytes
// Signature: undefined __thiscall parsePossibleTextureType(GISLParserContext * this, char * param_1, GsTBasicType param_2, uint param_3, SHC_Type * param_4)


/* GISLParserContext::parsePossibleTextureType(char const*, GsTBasicType, unsigned int, SHC_Type&)
    */

void __thiscall
GISLParserContext::parsePossibleTextureType
          (GISLParserContext *this,char *param_1,GsTBasicType param_2,uint param_3,SHC_Type *param_4
          )

{
  char cVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  IR_TypeSet *this_00;
  char *pcVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  long lVar15;
  undefined2 local_60 [2];
  uint local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar7 = 0;
  switch(*param_1) {
  case '1':
    uVar7 = 0;
    if (param_1[1] != 'D') goto switchD_00c1927c_caseD_34;
    uVar12 = 0;
    lVar15 = 2;
    break;
  case '2':
    if (param_1[1] == 'D') {
      pcVar14 = param_1 + 2;
      cVar1 = *pcVar14;
      if (cVar1 != 'M') {
        if (cVar1 != '\0') {
          bVar5 = false;
          pcVar9 = pcVar14;
          goto LAB_00c194d0;
        }
        uVar12 = 1;
        goto LAB_00c19394;
      }
      bVar5 = param_1[3] == 'S';
      lVar15 = 4;
      if (!bVar5) {
        lVar15 = 2;
      }
      pcVar9 = param_1 + 4;
      if (!bVar5) {
        pcVar9 = pcVar14;
      }
      cVar1 = param_1[lVar15];
LAB_00c194d0:
      if (cVar1 == 'D') {
        iVar6 = strncmp(pcVar9,"Depth",5);
        if (iVar6 == 0) {
          iVar6 = strncmp(pcVar9 + 5,"Array",5);
          bVar4 = iVar6 == 0;
          uVar12 = 1;
          lVar15 = 5;
          if (!bVar4) {
            lVar15 = 0;
          }
          pcVar9 = pcVar9 + 5 + lVar15;
          uVar13 = uVar12;
          if (bVar5) {
LAB_00c195bc:
            bVar3 = 0;
            bVar5 = false;
            bVar10 = 1;
            uVar12 = 2;
            bVar11 = 1;
          }
          else {
            bVar10 = 0;
            bVar3 = 0;
            bVar5 = false;
            bVar11 = 1;
            uVar13 = 1;
          }
          goto LAB_00c1946c;
        }
LAB_00c1954c:
        iVar6 = strncmp(pcVar9,"Array",5);
        bVar4 = iVar6 == 0;
        uVar12 = 1;
        lVar15 = 5;
        if (!bVar4) {
          lVar15 = 0;
        }
        pcVar9 = pcVar9 + lVar15;
        if (!bVar5) goto LAB_00c19354;
        bVar10 = 1;
        uVar12 = 2;
        goto LAB_00c19358;
      }
      if ((cVar1 != 'S') || (iVar6 = strncmp(pcVar9,"Shadow",6), iVar6 != 0)) goto LAB_00c1954c;
      iVar6 = strncmp(pcVar9 + 6,"Array",5);
      bVar4 = iVar6 == 0;
      uVar13 = 2;
      lVar15 = 5;
      if (!bVar4) {
        lVar15 = 0;
      }
      pcVar9 = pcVar9 + 6 + lVar15;
      if (bVar5) {
        uVar13 = 2;
        goto LAB_00c195bc;
      }
      bVar10 = 0;
      bVar3 = 0;
      bVar5 = false;
      uVar12 = 1;
      bVar11 = 1;
      goto LAB_00c1946c;
    }
    goto LAB_00c19474;
  case '3':
    if (param_1[1] != 'D') goto LAB_00c19474;
    uVar12 = 3;
    lVar15 = 2;
    break;
  default:
    goto switchD_00c1927c_caseD_34;
  case 'B':
    lVar15 = 6;
    iVar6 = strncmp(param_1,"Buffer",6);
    if (iVar6 != 0) goto LAB_00c19474;
    uVar12 = 5;
    break;
  case 'C':
    lVar15 = 4;
    iVar6 = strncmp(param_1,"Cube",4);
    if (iVar6 != 0) goto LAB_00c19474;
    uVar12 = 4;
  }
  pcVar9 = param_1 + lVar15;
  if (*pcVar9 == '\0') {
LAB_00c19394:
    this_00 = **(IR_TypeSet ***)(this + 0x58);
    *(uint *)(param_4 + 0x10) = param_3;
    *(undefined8 *)(param_4 + 0x20) = 0;
    *(undefined8 *)(param_4 + 0x28) = 0;
    *(undefined8 *)(param_4 + 0x18) = 0;
    local_60[0] = 0;
    *(IR_TypeSet **)param_4 = this_00;
    local_5c = 0;
  }
  else {
    iVar6 = strncmp(pcVar9,"Array",5);
    bVar4 = iVar6 == 0;
    lVar15 = 5;
    if (!bVar4) {
      lVar15 = 0;
    }
    pcVar9 = pcVar9 + lVar15;
LAB_00c19354:
    bVar10 = 0;
LAB_00c19358:
    cVar1 = *pcVar9;
    if (cVar1 == '_') {
      if (pcVar9[1] == 'R') {
        bVar5 = pcVar9[2] == 'W';
        lVar15 = 3;
        if (!bVar5) {
          lVar15 = 0;
        }
        pcVar9 = pcVar9 + lVar15;
      }
      else {
        bVar5 = false;
      }
      uVar13 = 0;
      bVar11 = 0;
      bVar3 = 1;
LAB_00c1946c:
      cVar1 = *pcVar9;
    }
    else {
      bVar11 = 0;
      uVar13 = 0;
      bVar5 = false;
      bVar3 = 1;
    }
    if (cVar1 != '\0') {
LAB_00c19474:
      uVar7 = 0;
      goto switchD_00c1927c_caseD_34;
    }
    this_00 = **(IR_TypeSet ***)(this + 0x58);
    *(uint *)(param_4 + 0x10) = param_3;
    *(undefined8 *)(param_4 + 0x20) = 0;
    *(undefined8 *)(param_4 + 0x28) = 0;
    *(undefined8 *)(param_4 + 0x18) = 0;
    local_60[0] = CONCAT11(bVar4,bVar5);
    *(IR_TypeSet **)param_4 = this_00;
    local_5c = uVar13;
    if ((((bVar4) && ((uVar7 = 0, uVar12 == 3 || (4 < uVar12)))) ||
        (uVar7 = 0, !(bool)(bVar3 | uVar12 - 1 < 2))) || ((bVar5 & (bVar10 | bVar11)) != 0))
    goto switchD_00c1927c_caseD_34;
  }
  uVar8 = IR_TypeSet::getTextureType(this_00,uVar12,(IR_TextureInfo *)local_60,(IR_Type *)0x0);
  uVar7 = 1;
  *(undefined8 *)(param_4 + 0x28) = 0;
  *(undefined8 *)(param_4 + 8) = uVar8;
switchD_00c1927c_caseD_34:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}


