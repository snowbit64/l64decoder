// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeFloatVectorAttribute
// Entry Point: 0090b844
// Size: 548 bytes
// Signature: undefined __thiscall writeFloatVectorAttribute(I3DWriter * this, char * param_1, float * param_2, uint param_3)


/* I3DWriter::writeFloatVectorAttribute(char const*, float const*, unsigned int) */

void __thiscall
I3DWriter::writeFloatVectorAttribute(I3DWriter *this,char *param_1,float *param_2,uint param_3)

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
  float *pfVar7;
  long lVar8;
  long lVar9;
  undefined auStack_78 [32];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar8 = *(long *)this;
  plVar4 = *(long **)(lVar8 + 8);
  if (*(char *)(lVar8 + 0x10) == '\0') {
    (**(code **)(*plVar4 + 0x30))(plVar4,&DAT_004d3339,1);
  }
  else {
    File::writeDosEOLExpand((File *)plVar4,&DAT_004d3339,1);
  }
  cVar1 = *(char *)(lVar8 + 0x10);
  plVar4 = *(long **)(lVar8 + 8);
  sVar5 = strlen(param_1);
  if (cVar1 == '\0') {
    (**(code **)(*plVar4 + 0x30))(plVar4,param_1);
  }
  else {
    File::writeDosEOLExpand((File *)plVar4,param_1,(uint)sVar5);
  }
  plVar4 = *(long **)(lVar8 + 8);
  if (*(char *)(lVar8 + 0x10) == '\0') {
    (**(code **)(*plVar4 + 0x30))(plVar4,&DAT_004f4936,2);
    uVar6 = extraout_x1_00;
  }
  else {
    File::writeDosEOLExpand((File *)plVar4,&DAT_004f4936,2);
    uVar6 = extraout_x1;
  }
  if (param_3 != 0) {
    lVar8 = *(long *)this;
    uVar3 = FUN_0091faa0((double)*param_2,auStack_78,uVar6,&DAT_0050d9a5);
    (**(code **)(**(long **)(lVar8 + 8) + 0x30))(*(long **)(lVar8 + 8),auStack_78,uVar3);
    if (param_3 != 1) {
      lVar8 = (ulong)param_3 - 1;
      pfVar7 = param_2 + 1;
      do {
        plVar4 = *(long **)(*(long *)this + 8);
        if (*(char *)(*(long *)this + 0x10) == '\0') {
          (**(code **)(*plVar4 + 0x30))(plVar4,&DAT_004d3339,1);
          uVar6 = extraout_x1_01;
        }
        else {
          File::writeDosEOLExpand((File *)plVar4,&DAT_004d3339,1);
          uVar6 = extraout_x1_02;
        }
        lVar9 = *(long *)this;
        uVar3 = FUN_0091faa0((double)*pfVar7,auStack_78,uVar6,&DAT_0050d9a5);
        (**(code **)(**(long **)(lVar9 + 8) + 0x30))(*(long **)(lVar9 + 8),auStack_78,uVar3);
        lVar8 = lVar8 + -1;
        pfVar7 = pfVar7 + 1;
      } while (lVar8 != 0);
    }
  }
  plVar4 = *(long **)(*(long *)this + 8);
  if (*(char *)(*(long *)this + 0x10) == '\0') {
    (**(code **)(*plVar4 + 0x30))(plVar4,&DAT_004e56b4,1);
  }
  else {
    File::writeDosEOLExpand((File *)plVar4,&DAT_004e56b4,1);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


