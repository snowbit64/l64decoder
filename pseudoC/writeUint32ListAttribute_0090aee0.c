// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeUint32ListAttribute
// Entry Point: 0090aee0
// Size: 556 bytes
// Signature: undefined __thiscall writeUint32ListAttribute(I3DWriter * this, char * param_1, char * param_2, uint * param_3, uint param_4)


/* I3DWriter::writeUint32ListAttribute(char const*, char const*, unsigned int*, unsigned int) */

void __thiscall
I3DWriter::writeUint32ListAttribute
          (I3DWriter *this,char *param_1,char *param_2,uint *param_3,uint param_4)

{
  char cVar1;
  long lVar2;
  undefined4 uVar3;
  long *plVar4;
  size_t sVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar6;
  undefined8 extraout_x1_02;
  long lVar7;
  uint *puVar8;
  long lVar9;
  undefined auStack_88 [32];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar9 = *(long *)this;
  plVar4 = *(long **)(lVar9 + 8);
  if (*(char *)(lVar9 + 0x10) == '\0') {
    (**(code **)(*plVar4 + 0x30))(plVar4,&DAT_004d3339,1);
  }
  else {
    File::writeDosEOLExpand((File *)plVar4,&DAT_004d3339,1);
  }
  cVar1 = *(char *)(lVar9 + 0x10);
  plVar4 = *(long **)(lVar9 + 8);
  sVar5 = strlen(param_1);
  if (cVar1 == '\0') {
    (**(code **)(*plVar4 + 0x30))(plVar4,param_1);
  }
  else {
    File::writeDosEOLExpand((File *)plVar4,param_1,(uint)sVar5);
  }
  plVar4 = *(long **)(lVar9 + 8);
  if (*(char *)(lVar9 + 0x10) == '\0') {
    (**(code **)(*plVar4 + 0x30))(plVar4,&DAT_004f4936,2);
    uVar6 = extraout_x1_00;
  }
  else {
    File::writeDosEOLExpand((File *)plVar4,&DAT_004f4936,2);
    uVar6 = extraout_x1;
  }
  if (param_4 != 0) {
    lVar9 = *(long *)this;
    uVar3 = FUN_0091faa0(auStack_88,uVar6,&DAT_004cf2ba,*param_3);
    (**(code **)(**(long **)(lVar9 + 8) + 0x30))(*(long **)(lVar9 + 8),auStack_88,uVar3);
    if (param_4 != 1) {
      lVar9 = (ulong)param_4 - 1;
      puVar8 = param_3 + 1;
      do {
        cVar1 = *(char *)(*(long *)this + 0x10);
        plVar4 = *(long **)(*(long *)this + 8);
        sVar5 = strlen(param_2);
        if (cVar1 == '\0') {
          (**(code **)(*plVar4 + 0x30))(plVar4,param_2);
          uVar6 = extraout_x1_01;
        }
        else {
          File::writeDosEOLExpand((File *)plVar4,param_2,(uint)sVar5);
          uVar6 = extraout_x1_02;
        }
        lVar7 = *(long *)this;
        uVar3 = FUN_0091faa0(auStack_88,uVar6,&DAT_004cf2ba,*puVar8);
        (**(code **)(**(long **)(lVar7 + 8) + 0x30))(*(long **)(lVar7 + 8),auStack_88,uVar3);
        lVar9 = lVar9 + -1;
        puVar8 = puVar8 + 1;
      } while (lVar9 != 0);
    }
  }
  plVar4 = *(long **)(*(long *)this + 8);
  if (*(char *)(*(long *)this + 0x10) == '\0') {
    (**(code **)(*plVar4 + 0x30))(plVar4,&DAT_004e56b4,1);
  }
  else {
    File::writeDosEOLExpand((File *)plVar4,&DAT_004e56b4,1);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


