// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeBoolAttribute
// Entry Point: 0091f988
// Size: 280 bytes
// Signature: undefined __thiscall writeBoolAttribute(I3DWriter * this, char * param_1, bool param_2)


/* I3DWriter::writeBoolAttribute(char const*, bool) */

void __thiscall I3DWriter::writeBoolAttribute(I3DWriter *this,char *param_1,bool param_2)

{
  char cVar1;
  long *plVar2;
  size_t sVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)this;
  plVar2 = *(long **)(lVar6 + 8);
  if (*(char *)(lVar6 + 0x10) == '\0') {
    (**(code **)(*plVar2 + 0x30))(plVar2,&DAT_004d3339,1);
  }
  else {
    File::writeDosEOLExpand((File *)plVar2,&DAT_004d3339,1);
  }
  cVar1 = *(char *)(lVar6 + 0x10);
  plVar2 = *(long **)(lVar6 + 8);
  sVar3 = strlen(param_1);
  if (cVar1 == '\0') {
    (**(code **)(*plVar2 + 0x30))(plVar2,param_1);
  }
  else {
    File::writeDosEOLExpand((File *)plVar2,param_1,(uint)sVar3);
  }
  cVar1 = *(char *)(*(long *)this + 0x10);
  plVar2 = *(long **)(*(long *)this + 8);
  if (param_2) {
    if (cVar1 != '\0') {
      File::writeDosEOLExpand((File *)plVar2,"=\"true\"",7);
      return;
    }
    lVar6 = *plVar2;
    pcVar4 = "=\"true\"";
    uVar5 = 7;
  }
  else {
    if (cVar1 != '\0') {
      File::writeDosEOLExpand((File *)plVar2,"=\"false\"",8);
      return;
    }
    lVar6 = *plVar2;
    pcVar4 = "=\"false\"";
    uVar5 = 8;
  }
  (**(code **)(lVar6 + 0x30))(plVar2,pcVar4,uVar5);
  return;
}


