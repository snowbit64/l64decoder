// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findStreams
// Entry Point: 00c71748
// Size: 300 bytes
// Signature: undefined findStreams(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TheoraVideoDecoder::findStreams() */

void TheoraVideoDecoder::findStreams(void)

{
  bool bVar1;
  long in_x0;
  long lVar2;
  long *plVar3;
  long **pplVar4;
  long **pplVar5;
  long **pplVar6;
  long *plVar7;
  
  pplVar5 = (long **)(in_x0 + 0x40);
  *pplVar5 = (long *)0x0;
  pplVar6 = *(long ***)(in_x0 + 0x28);
  *(undefined8 *)(in_x0 + 0x48) = 0;
  if (pplVar6 == (long **)(in_x0 + 0x30)) {
    return;
  }
  plVar3 = (long *)0x0;
  do {
    plVar7 = pplVar6[5];
    *(undefined *)(plVar7 + 0x77) = 1;
    if ((plVar3 == (long *)0x0) && (*(int *)(plVar7 + 0x33) == 1)) {
      lVar2 = plVar7[0x40];
      *pplVar5 = plVar7;
      lVar2 = th_decode_alloc(plVar7 + 0x34,lVar2);
      plVar7[0x41] = lVar2;
      pplVar4 = (long **)pplVar6[1];
joined_r0x00c71810:
      if (pplVar4 != (long **)0x0) goto LAB_00c717dc;
LAB_00c71814:
      pplVar4 = pplVar6 + 2;
      bVar1 = (long **)**pplVar4 != pplVar6;
      pplVar6 = (long **)*pplVar4;
      if (bVar1) {
        do {
          plVar3 = *pplVar4;
          pplVar4 = (long **)(plVar3 + 2);
          pplVar6 = (long **)*pplVar4;
        } while ((long *)**pplVar4 != plVar3);
      }
    }
    else {
      if ((*(long *)(in_x0 + 0x48) == 0) && (*(int *)(plVar7 + 0x33) == 0)) {
        *(long **)(in_x0 + 0x48) = plVar7;
        vorbis_synthesis_init(plVar7 + 0x4d,plVar7 + 0x42);
        vorbis_block_init(plVar7 + 0x4d,plVar7 + 0x5f);
        pplVar4 = (long **)pplVar6[1];
        goto joined_r0x00c71810;
      }
      *(undefined *)(plVar7 + 0x77) = 0;
      pplVar4 = (long **)pplVar6[1];
      if ((long **)pplVar6[1] == (long **)0x0) goto LAB_00c71814;
LAB_00c717dc:
      do {
        pplVar6 = pplVar4;
        pplVar4 = (long **)*pplVar6;
      } while (pplVar4 != (long **)0x0);
    }
    if (pplVar6 == (long **)(in_x0 + 0x30)) {
      return;
    }
    plVar3 = *pplVar5;
  } while( true );
}


