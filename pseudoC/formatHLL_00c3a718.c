// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: formatHLL
// Entry Point: 00c3a718
// Size: 704 bytes
// Signature: undefined __thiscall formatHLL(IR_Const * this, char * param_1, GsTBasicType param_2, bool param_3)


/* IR_Const::formatHLL(char*, GsTBasicType, bool) const */

void __thiscall IR_Const::formatHLL(IR_Const *this,char *param_1,GsTBasicType param_2,bool param_3)

{
  undefined4 uVar1;
  IR_Const IVar2;
  size_t sVar3;
  byte *__src;
  undefined *puVar4;
  byte *pbVar5;
  char *pcVar6;
  
  switch(*(undefined4 *)this) {
  case 3:
    FUN_00c3a674((double)*(float *)(this + 8),param_1,0xffffffffffffffff,&DAT_004f3249,9);
    pcVar6 = strchr(param_1,0x2e);
    if ((pcVar6 == (char *)0x0) && (pcVar6 = strchr(param_1,0x65), pcVar6 == (char *)0x0)) {
      sVar3 = strlen(param_1);
      *(undefined2 *)(param_1 + sVar3) = 0x302e;
      *(undefined *)((long)(param_1 + sVar3) + 2) = 0;
    }
    if (param_3) {
      if (param_2 == 3) {
        sVar3 = strlen(param_1);
        *(undefined2 *)(param_1 + sVar3) = 0x66;
      }
      else if (param_2 == 4) {
        sVar3 = strlen(param_1);
        *(undefined2 *)(param_1 + sVar3) = 0x68;
      }
    }
    break;
  case 5:
    uVar1 = *(undefined4 *)(this + 8);
    puVar4 = &DAT_004c7f7a;
    goto LAB_00c3a7f8;
  case 6:
    uVar1 = *(undefined4 *)(this + 8);
    puVar4 = &DAT_004eba90;
LAB_00c3a7f8:
    FUN_00c3a674(param_1,0xffffffffffffffff,puVar4,uVar1);
    return;
  case 9:
    __src = (byte *)"false";
    if (this[8] != (IR_Const)0x0) {
      __src = &DAT_004ec5fc;
    }
    goto LAB_00c3a848;
  case 10:
    pbVar5 = *(byte **)(*(long *)(this + 8) + 8);
    __src = *(byte **)(pbVar5 + 0x10);
    if ((*pbVar5 & 1) == 0) {
      __src = pbVar5 + 1;
    }
LAB_00c3a848:
    strcpy(param_1,(char *)__src);
    return;
  case 0xc:
    FUN_00c3a674(param_1,0xffffffffffffffff,&DAT_004e91d6,*(undefined8 *)(this + 8));
    return;
  case 0xd:
    IVar2 = this[8];
    if (IVar2 != (IR_Const)0xff) {
      if ((char)IVar2 < '\0') {
        pcVar6 = param_1 + 3;
        *param_1 = '_';
        param_1[1] = (byte)IVar2 >> 2 & 3 | 0x30;
        param_1[2] = (byte)IVar2 & 3 | 0x30;
      }
      else {
        pcVar6 = param_1 + 1;
        *param_1 = (&DAT_004eba8b)[(byte)IVar2];
      }
      IVar2 = this[9];
      param_1 = pcVar6;
      if (IVar2 != (IR_Const)0xff) {
        if ((char)IVar2 < '\0') {
          param_1 = pcVar6 + 3;
          *pcVar6 = '_';
          pcVar6[1] = (byte)IVar2 >> 2 & 3 | 0x30;
          pcVar6[2] = (byte)IVar2 & 3 | 0x30;
        }
        else {
          param_1 = pcVar6 + 1;
          *pcVar6 = (&DAT_004eba8b)[(byte)IVar2];
        }
        IVar2 = this[10];
        if (IVar2 != (IR_Const)0xff) {
          if ((char)IVar2 < '\0') {
            pcVar6 = param_1 + 3;
            *param_1 = '_';
            param_1[1] = (byte)IVar2 >> 2 & 3 | 0x30;
            param_1[2] = (byte)IVar2 & 3 | 0x30;
          }
          else {
            pcVar6 = param_1 + 1;
            *param_1 = (&DAT_004eba8b)[(byte)IVar2];
          }
          IVar2 = this[0xb];
          param_1 = pcVar6;
          if (IVar2 != (IR_Const)0xff) {
            if ((char)IVar2 < '\0') {
              param_1 = pcVar6 + 3;
              *pcVar6 = '_';
              pcVar6[1] = (byte)IVar2 >> 2 & 3 | 0x30;
              pcVar6[2] = (byte)IVar2 & 3 | 0x30;
            }
            else {
              param_1 = pcVar6 + 1;
              *pcVar6 = (&DAT_004eba8b)[(byte)IVar2];
            }
          }
        }
      }
    }
    *param_1 = '\0';
  }
  return;
}


