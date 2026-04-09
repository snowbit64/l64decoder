// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeUint32Attribute
// Entry Point: 0090a950
// Size: 364 bytes
// Signature: undefined __thiscall writeUint32Attribute(I3DWriter * this, char * param_1, uint param_2)


/* I3DWriter::writeUint32Attribute(char const*, unsigned int) */

void __thiscall I3DWriter::writeUint32Attribute(I3DWriter *this,char *param_1,uint param_2)

{
  char cVar1;
  long lVar2;
  undefined4 uVar3;
  long *plVar4;
  size_t sVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar6;
  long lVar7;
  undefined auStack_68 [32];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar7 = *(long *)this;
  plVar4 = *(long **)(lVar7 + 8);
  if (*(char *)(lVar7 + 0x10) == '\0') {
    (**(code **)(*plVar4 + 0x30))(plVar4,&DAT_004d3339,1);
  }
  else {
    File::writeDosEOLExpand((File *)plVar4,&DAT_004d3339,1);
  }
  cVar1 = *(char *)(lVar7 + 0x10);
  plVar4 = *(long **)(lVar7 + 8);
  sVar5 = strlen(param_1);
  if (cVar1 == '\0') {
    (**(code **)(*plVar4 + 0x30))(plVar4,param_1);
  }
  else {
    File::writeDosEOLExpand((File *)plVar4,param_1,(uint)sVar5);
  }
  plVar4 = *(long **)(lVar7 + 8);
  if (*(char *)(lVar7 + 0x10) == '\0') {
    (**(code **)(*plVar4 + 0x30))(plVar4,&DAT_004f4936,2);
    uVar6 = extraout_x1_00;
  }
  else {
    File::writeDosEOLExpand((File *)plVar4,&DAT_004f4936,2);
    uVar6 = extraout_x1;
  }
  uVar3 = FUN_0091faa0(auStack_68,uVar6,&DAT_004cf2ba,param_2);
  (**(code **)(**(long **)(lVar7 + 8) + 0x30))(*(long **)(lVar7 + 8),auStack_68,uVar3);
  plVar4 = *(long **)(lVar7 + 8);
  if (*(char *)(lVar7 + 0x10) == '\0') {
    (**(code **)(*plVar4 + 0x30))(plVar4,&DAT_004e56b4,1);
  }
  else {
    File::writeDosEOLExpand((File *)plVar4,&DAT_004e56b4,1);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


