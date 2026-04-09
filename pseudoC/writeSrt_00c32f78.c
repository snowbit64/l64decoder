// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeSrt
// Entry Point: 00c32f78
// Size: 560 bytes
// Signature: undefined __cdecl writeSrt(SharedContext * param_1, CodeStringStream * param_2, vector * param_3)


/* IR_HllConvertUtil::writeSrt(IR_HllConvertUtil::SharedContext&, CodeStringStream&,
   std::__ndk1::vector<IR_HllConvertUtil::GlobalData,
   std::__ndk1::allocator<IR_HllConvertUtil::GlobalData> >&) */

void IR_HllConvertUtil::writeSrt(SharedContext *param_1,CodeStringStream *param_2,vector *param_3)

{
  long lVar1;
  byte *pbVar2;
  int *piVar3;
  byte *pbVar4;
  byte *pbVar5;
  int *piVar6;
  
  CodeStringStream::writeLine((char *)param_2,"struct SrtResources\n{\n");
  piVar6 = *(int **)param_3;
  piVar3 = *(int **)(param_3 + 8);
  if (piVar6 != piVar3) {
    do {
      if (*piVar6 == 2) {
        lVar1 = (long)piVar6 + 0x19;
        if ((*(byte *)(piVar6 + 6) & 1) != 0) {
          lVar1 = *(long *)(piVar6 + 10);
        }
        CodeStringStream::writeLine
                  ((char *)param_2,"    %s m_texture_%s;\n",lVar1,*(undefined8 *)(piVar6 + 2));
      }
      piVar6 = piVar6 + 0x10;
    } while (piVar6 != piVar3);
    piVar6 = *(int **)param_3;
    piVar3 = *(int **)(param_3 + 8);
    if (piVar6 != piVar3) {
      do {
        if (*piVar6 == 3) {
          lVar1 = (long)piVar6 + 0x19;
          if ((*(byte *)(piVar6 + 6) & 1) != 0) {
            lVar1 = *(long *)(piVar6 + 10);
          }
          CodeStringStream::writeLine
                    ((char *)param_2,"    %s m_rwtexture_%s;\n",lVar1,*(undefined8 *)(piVar6 + 2));
        }
        piVar6 = piVar6 + 0x10;
      } while (piVar6 != piVar3);
      piVar3 = *(int **)(param_3 + 8);
      for (piVar6 = *(int **)param_3; piVar6 != piVar3; piVar6 = piVar6 + 0x10) {
        if (*piVar6 == 4) {
          lVar1 = (long)piVar6 + 0x19;
          if ((*(byte *)(piVar6 + 6) & 1) != 0) {
            lVar1 = *(long *)(piVar6 + 10);
          }
          CodeStringStream::writeLine
                    ((char *)param_2,"    %s m_sampler_%s;\n",lVar1,*(undefined8 *)(piVar6 + 2));
        }
      }
    }
  }
  CodeStringStream::writeLine((char *)param_2,&DAT_00510f98);
  StringStream::pushString((StringStream *)param_2,"struct SRT\n{\n");
  StringStream::pushString((StringStream *)param_2,"    SrtResources* m_pSrtResources;\n");
  pbVar4 = (*(byte ***)(param_1 + 8))[1];
  for (pbVar2 = **(byte ***)(param_1 + 8); pbVar2 != pbVar4; pbVar2 = pbVar2 + 0x40) {
    if (pbVar2[0x19] == 0) {
      StringStream::pushString((StringStream *)param_2,"    ");
      pbVar5 = *(byte **)(pbVar2 + 0x10);
      if ((*pbVar2 & 1) == 0) {
        pbVar5 = pbVar2 + 1;
      }
      StringStream::pushString((StringStream *)param_2,(char *)pbVar5);
      StringStream::pushString((StringStream *)param_2,"* m_p");
      pbVar5 = *(byte **)(pbVar2 + 0x10);
      if ((*pbVar2 & 1) == 0) {
        pbVar5 = pbVar2 + 1;
      }
      StringStream::pushString((StringStream *)param_2,(char *)pbVar5);
      StringStream::pushString((StringStream *)param_2,";\n");
    }
  }
  StringStream::pushString((StringStream *)param_2,"};\n\n");
  StringStream::pushString((StringStream *)param_2,"const SRT* g_pSRT : S_SRT_DATA;\n\n");
  return;
}


