// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeStringAttribute
// Entry Point: 00915ca8
// Size: 340 bytes
// Signature: undefined __thiscall writeStringAttribute(I3DWriter * this, char * param_1, char * param_2)


/* I3DWriter::writeStringAttribute(char const*, char const*) */

void __thiscall I3DWriter::writeStringAttribute(I3DWriter *this,char *param_1,char *param_2)

{
  char cVar1;
  long *plVar2;
  size_t sVar3;
  long lVar4;
  
  lVar4 = *(long *)this;
  plVar2 = *(long **)(lVar4 + 8);
  if (*(char *)(lVar4 + 0x10) == '\0') {
    (**(code **)(*plVar2 + 0x30))(plVar2,&DAT_004d3339,1);
  }
  else {
    File::writeDosEOLExpand((File *)plVar2,&DAT_004d3339,1);
  }
  cVar1 = *(char *)(lVar4 + 0x10);
  plVar2 = *(long **)(lVar4 + 8);
  sVar3 = strlen(param_1);
  if (cVar1 == '\0') {
    (**(code **)(*plVar2 + 0x30))(plVar2,param_1);
  }
  else {
    File::writeDosEOLExpand((File *)plVar2,param_1,(uint)sVar3);
  }
  plVar2 = *(long **)(lVar4 + 8);
  if (*(char *)(lVar4 + 0x10) == '\0') {
    (**(code **)(*plVar2 + 0x30))(plVar2,&DAT_004f4936,2);
  }
  else {
    File::writeDosEOLExpand((File *)plVar2,&DAT_004f4936,2);
  }
  cVar1 = *(char *)(lVar4 + 0x10);
  plVar2 = *(long **)(lVar4 + 8);
  sVar3 = strlen(param_2);
  if (cVar1 == '\0') {
    (**(code **)(*plVar2 + 0x30))(plVar2,param_2);
  }
  else {
    File::writeDosEOLExpand((File *)plVar2,param_2,(uint)sVar3);
  }
  plVar2 = *(long **)(lVar4 + 8);
  if (*(char *)(lVar4 + 0x10) == '\0') {
    (**(code **)(*plVar2 + 0x30))(plVar2,&DAT_004e56b4,1);
  }
  else {
    File::writeDosEOLExpand((File *)plVar2,&DAT_004e56b4,1);
  }
  return;
}


