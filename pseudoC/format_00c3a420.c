// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: format
// Entry Point: 00c3a420
// Size: 596 bytes
// Signature: undefined __thiscall format(IR_Const * this, char * param_1)


/* IR_Const::format(char*) const */

void __thiscall IR_Const::format(IR_Const *this,char *param_1)

{
  IR_Const IVar1;
  char *pcVar2;
  undefined4 uVar3;
  byte *pbVar4;
  byte *__src;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  
  switch(*(undefined4 *)this) {
  case 0:
    param_1[2] = '\0';
    *(undefined2 *)param_1 = 0x2d2d;
    return;
  default:
    return;
  case 3:
    FUN_00c3a674((double)*(float *)(this + 8),param_1,0xffffffffffffffff,&DAT_004ee045);
    return;
  case 5:
    uVar3 = *(undefined4 *)(this + 8);
    pcVar2 = "#%d";
    break;
  case 6:
    uVar3 = *(undefined4 *)(this + 8);
    pcVar2 = "#%uU";
    break;
  case 9:
    __src = &UNK_004e13e9;
    if (this[8] != (IR_Const)0x0) {
      __src = (byte *)"#true";
    }
    goto LAB_00c3a4c8;
  case 10:
    pbVar4 = *(byte **)(*(long *)(this + 8) + 8);
    __src = *(byte **)(pbVar4 + 0x10);
    if ((*pbVar4 & 1) == 0) {
      __src = pbVar4 + 1;
    }
LAB_00c3a4c8:
    strcpy(param_1,(char *)__src);
    return;
  case 0xb:
    if (*(long *)(this + 8) == 0) {
      pcVar2 = "NULL";
      goto LAB_00c3a554;
    }
    uVar3 = *(undefined4 *)(*(long *)(this + 8) + 0x3c);
    pcVar2 = "SECTION%u";
    break;
  case 0xc:
    FUN_00c3a674(param_1,0xffffffffffffffff,&DAT_004d33bb,*(undefined8 *)(this + 8));
    return;
  case 0xd:
    *(undefined2 *)param_1 = 0x3c23;
    IVar1 = this[8];
    puVar7 = (undefined2 *)(param_1 + 2);
    if (IVar1 != (IR_Const)0xff) {
      if ((char)IVar1 < '\0') {
        puVar7 = (undefined2 *)(param_1 + 5);
        param_1[2] = '_';
        param_1[3] = (byte)IVar1 >> 2 & 3 | 0x30;
        param_1[4] = (byte)IVar1 & 3 | 0x30;
      }
      else {
        puVar7 = (undefined2 *)(param_1 + 3);
        param_1[2] = (&DAT_004eba8b)[(byte)IVar1];
      }
      IVar1 = this[9];
      if (IVar1 != (IR_Const)0xff) {
        if ((char)IVar1 < '\0') {
          puVar5 = (undefined2 *)((long)puVar7 + 3);
          *(undefined *)puVar7 = 0x5f;
          *(byte *)((long)puVar7 + 1) = (byte)IVar1 >> 2 & 3 | 0x30;
          *(byte *)(puVar7 + 1) = (byte)IVar1 & 3 | 0x30;
        }
        else {
          puVar5 = (undefined2 *)((long)puVar7 + 1);
          *(undefined1 *)puVar7 = (&DAT_004eba8b)[(byte)IVar1];
        }
        IVar1 = this[10];
        puVar7 = puVar5;
        if (IVar1 != (IR_Const)0xff) {
          if ((char)IVar1 < '\0') {
            puVar6 = (undefined2 *)((long)puVar5 + 3);
            *(undefined *)puVar5 = 0x5f;
            *(byte *)((long)puVar5 + 1) = (byte)IVar1 >> 2 & 3 | 0x30;
            *(byte *)(puVar5 + 1) = (byte)IVar1 & 3 | 0x30;
          }
          else {
            puVar6 = (undefined2 *)((long)puVar5 + 1);
            *(undefined1 *)puVar5 = (&DAT_004eba8b)[(byte)IVar1];
          }
          IVar1 = this[0xb];
          puVar7 = puVar6;
          if (IVar1 != (IR_Const)0xff) {
            if ((char)IVar1 < '\0') {
              puVar7 = (undefined2 *)((long)puVar6 + 3);
              *(undefined *)puVar6 = 0x5f;
              *(byte *)((long)puVar6 + 1) = (byte)IVar1 >> 2 & 3 | 0x30;
              *(byte *)(puVar6 + 1) = (byte)IVar1 & 3 | 0x30;
            }
            else {
              puVar7 = (undefined2 *)((long)puVar6 + 1);
              *(undefined1 *)puVar6 = (&DAT_004eba8b)[(byte)IVar1];
            }
          }
        }
      }
    }
    *puVar7 = 0x3e;
    return;
  case 0xe:
    pcVar2 = "UNINIT";
LAB_00c3a554:
    FUN_00c3a674(param_1,0xffffffffffffffff,pcVar2);
    return;
  }
  FUN_00c3a674(param_1,0xffffffffffffffff,pcVar2,uVar3);
  return;
}


