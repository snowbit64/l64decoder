// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeStringListAttributeWithEmptyOmit
// Entry Point: 00915a80
// Size: 552 bytes
// Signature: undefined __thiscall writeStringListAttributeWithEmptyOmit(I3DWriter * this, char * param_1, char * * param_2, uint param_3)


/* I3DWriter::writeStringListAttributeWithEmptyOmit(char const*, char const**, unsigned int) */

bool __thiscall
I3DWriter::writeStringListAttributeWithEmptyOmit
          (I3DWriter *this,char *param_1,char **param_2,uint param_3)

{
  char cVar1;
  long *plVar2;
  size_t sVar3;
  char *pcVar4;
  long lVar5;
  char **ppcVar6;
  
  if (param_3 != 0) {
    lVar5 = *(long *)this;
    plVar2 = *(long **)(lVar5 + 8);
    if (*(char *)(lVar5 + 0x10) == '\0') {
      (**(code **)(*plVar2 + 0x30))(plVar2,&DAT_004d3339,1);
    }
    else {
      File::writeDosEOLExpand((File *)plVar2,&DAT_004d3339,1);
    }
    cVar1 = *(char *)(lVar5 + 0x10);
    plVar2 = *(long **)(lVar5 + 8);
    sVar3 = strlen(param_1);
    if (cVar1 == '\0') {
      (**(code **)(*plVar2 + 0x30))(plVar2,param_1);
    }
    else {
      File::writeDosEOLExpand((File *)plVar2,param_1,(uint)sVar3);
    }
    plVar2 = *(long **)(lVar5 + 8);
    if (*(char *)(lVar5 + 0x10) == '\0') {
      (**(code **)(*plVar2 + 0x30))(plVar2,&DAT_004f4936,2);
    }
    else {
      File::writeDosEOLExpand((File *)plVar2,&DAT_004f4936,2);
    }
    pcVar4 = *param_2;
    cVar1 = *(char *)(*(long *)this + 0x10);
    plVar2 = *(long **)(*(long *)this + 8);
    sVar3 = strlen(pcVar4);
    if (cVar1 == '\0') {
      (**(code **)(*plVar2 + 0x30))(plVar2,pcVar4);
    }
    else {
      File::writeDosEOLExpand((File *)plVar2,pcVar4,(uint)sVar3);
    }
    if (1 < param_3) {
      ppcVar6 = param_2 + 1;
      lVar5 = (ulong)param_3 - 1;
      do {
        plVar2 = *(long **)(*(long *)this + 8);
        if (*(char *)(*(long *)this + 0x10) == '\0') {
          (**(code **)(*plVar2 + 0x30))(plVar2,&DAT_004e7154,1);
        }
        else {
          File::writeDosEOLExpand((File *)plVar2,&DAT_004e7154,1);
        }
        pcVar4 = *ppcVar6;
        cVar1 = *(char *)(*(long *)this + 0x10);
        plVar2 = *(long **)(*(long *)this + 8);
        sVar3 = strlen(pcVar4);
        if (cVar1 == '\0') {
          (**(code **)(*plVar2 + 0x30))(plVar2,pcVar4);
        }
        else {
          File::writeDosEOLExpand((File *)plVar2,pcVar4,(uint)sVar3);
        }
        ppcVar6 = ppcVar6 + 1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    plVar2 = *(long **)(*(long *)this + 8);
    if (*(char *)(*(long *)this + 0x10) == '\0') {
      (**(code **)(*plVar2 + 0x30))(plVar2,&DAT_004e56b4,1);
    }
    else {
      File::writeDosEOLExpand((File *)plVar2,&DAT_004e56b4,1);
    }
  }
  return param_3 != 0;
}


