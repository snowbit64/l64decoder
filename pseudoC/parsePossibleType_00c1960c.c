// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parsePossibleType
// Entry Point: 00c1960c
// Size: 804 bytes
// Signature: undefined __thiscall parsePossibleType(GISLParserContext * this, char * param_1, uint param_2, SHC_Type * param_3, bool * param_4)


/* GISLParserContext::parsePossibleType(char const*, unsigned int, SHC_Type&, bool&) */

ulong __thiscall
GISLParserContext::parsePossibleType
          (GISLParserContext *this,char *param_1,uint param_2,SHC_Type *param_3,bool *param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  IR_TypeSet *pIVar5;
  undefined8 uVar6;
  GsTBasicType GVar7;
  GsTBasicType GVar8;
  byte *pbVar9;
  uint uVar10;
  byte *__s1;
  
  *param_4 = false;
  uVar10 = 0;
  switch(*param_1) {
  case 'b':
    iVar3 = strncmp(param_1,"bool",4);
    if (iVar3 == 0) {
      pbVar9 = (byte *)(param_1 + 4);
      GVar8 = 9;
      GVar7 = 9;
      bVar1 = *pbVar9;
      if (bVar1 == 0) goto LAB_00c19688;
LAB_00c19838:
      if (0xfffffffb < bVar1 - 0x35) {
        uVar10 = bVar1 - 0x30;
        if (pbVar9[1] == 0x78) {
          if ((0xfffffffb < pbVar9[2] - 0x35) && (pbVar9[3] == 0)) {
            uVar2 = pbVar9[2] - 0x30;
            if (uVar10 == 1) {
              pIVar5 = **(IR_TypeSet ***)(this + 0x58);
              *(uint *)(param_3 + 0x10) = param_2;
              *(undefined8 *)(param_3 + 0x20) = 0;
              *(undefined8 *)(param_3 + 0x28) = 0;
              *(undefined8 *)(param_3 + 0x18) = 0;
              *(IR_TypeSet **)param_3 = pIVar5;
              uVar6 = IR_TypeSet::getVectorType(pIVar5,GVar8,uVar2);
            }
            else {
              pIVar5 = **(IR_TypeSet ***)(this + 0x58);
              *(uint *)(param_3 + 0x10) = param_2;
              *(undefined8 *)(param_3 + 0x20) = 0;
              *(undefined8 *)(param_3 + 0x28) = 0;
              *(undefined8 *)(param_3 + 0x18) = 0;
              *(IR_TypeSet **)param_3 = pIVar5;
              if (uVar2 == 1) goto LAB_00c19870;
              uVar6 = IR_TypeSet::getMatrixType(pIVar5,GVar8,uVar2,uVar10);
            }
            goto LAB_00c198d4;
          }
        }
        else if (pbVar9[1] == 0) {
          pIVar5 = **(IR_TypeSet ***)(this + 0x58);
          *(uint *)(param_3 + 0x10) = param_2;
          *(undefined8 *)(param_3 + 0x20) = 0;
          *(undefined8 *)(param_3 + 0x28) = 0;
          *(undefined8 *)(param_3 + 0x18) = 0;
          *(IR_TypeSet **)param_3 = pIVar5;
LAB_00c19870:
          uVar6 = IR_TypeSet::getVectorType(pIVar5,GVar8,uVar10);
LAB_00c198d4:
          uVar10 = 1;
          *(undefined8 *)(param_3 + 8) = uVar6;
          goto switchD_00c1965c_caseD_63;
        }
      }
    }
    break;
  default:
    goto switchD_00c1965c_caseD_63;
  case 'f':
    iVar3 = strncmp(param_1,"float",5);
    if (iVar3 == 0) {
      pbVar9 = (byte *)(param_1 + 5);
      GVar7 = 3;
      bVar1 = *pbVar9;
joined_r0x00c19834:
      GVar8 = GVar7;
      if (bVar1 != 0) goto LAB_00c19838;
LAB_00c19688:
      pIVar5 = **(IR_TypeSet ***)(this + 0x58);
      *(uint *)(param_3 + 0x10) = param_2;
      *(undefined8 *)(param_3 + 0x20) = 0;
      *(undefined8 *)(param_3 + 0x28) = 0;
      *(undefined8 *)(param_3 + 0x18) = 0;
      *(IR_TypeSet **)param_3 = pIVar5;
      uVar6 = IR_TypeSet::getScalarType(pIVar5,GVar7);
      goto LAB_00c198d4;
    }
    break;
  case 'h':
    iVar3 = strncmp(param_1,"half",4);
    if (iVar3 == 0) {
      pbVar9 = (byte *)(param_1 + 4);
      GVar7 = 4;
      bVar1 = *pbVar9;
      goto joined_r0x00c19834;
    }
    break;
  case 'i':
    iVar3 = strncmp(param_1,"int",3);
    if (iVar3 == 0) {
      __s1 = (byte *)(param_1 + 3);
      iVar3 = strncmp((char *)__s1,"16_t",4);
      pbVar9 = (byte *)(param_1 + 7);
      GVar8 = 5;
      GVar7 = 7;
LAB_00c19828:
      if (iVar3 != 0) {
        pbVar9 = __s1;
        GVar7 = GVar8;
      }
      bVar1 = *pbVar9;
      goto joined_r0x00c19834;
    }
    break;
  case 's':
    iVar3 = strncmp(param_1,"sampler",7);
    if (iVar3 == 0) {
      if (param_1[7] == '\0') {
        pIVar5 = **(IR_TypeSet ***)(this + 0x58);
        *(uint *)(param_3 + 0x10) = param_2;
        *(undefined8 *)(param_3 + 0x20) = 0;
        *(undefined8 *)(param_3 + 0x28) = 0;
        *(undefined8 *)(param_3 + 0x18) = 0;
        *(IR_TypeSet **)param_3 = pIVar5;
        uVar6 = IR_TypeSet::getSamplerType(pIVar5,0);
      }
      else {
        iVar3 = strcmp(param_1 + 7,"Cmp");
        if (iVar3 != 0) break;
        pIVar5 = **(IR_TypeSet ***)(this + 0x58);
        *(uint *)(param_3 + 0x10) = param_2;
        *(undefined8 *)(param_3 + 0x20) = 0;
        *(undefined8 *)(param_3 + 0x28) = 0;
        *(undefined8 *)(param_3 + 0x18) = 0;
        *(IR_TypeSet **)param_3 = pIVar5;
        uVar6 = IR_TypeSet::getSamplerType(pIVar5,1);
      }
      goto LAB_00c198d4;
    }
    break;
  case 't':
    GVar7 = 7;
    iVar3 = strncmp(param_1,"texture",7);
    if (iVar3 == 0) {
      *param_4 = true;
      uVar4 = parsePossibleTextureType(this,param_1 + 7,GVar7,param_2,param_3);
      return uVar4;
    }
    break;
  case 'u':
    iVar3 = strncmp(param_1,"uint",4);
    if (iVar3 == 0) {
      __s1 = (byte *)(param_1 + 4);
      iVar3 = strncmp((char *)__s1,"16_t",4);
      pbVar9 = (byte *)(param_1 + 8);
      GVar8 = 6;
      GVar7 = 8;
      goto LAB_00c19828;
    }
  }
  uVar10 = 0;
switchD_00c1965c_caseD_63:
  return (ulong)uVar10;
}


