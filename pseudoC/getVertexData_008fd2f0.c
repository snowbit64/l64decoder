// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getVertexData
// Entry Point: 008fd2f0
// Size: 872 bytes
// Signature: undefined __cdecl getVertexData(char * * param_1, IndexedTriangleSet * param_2, uint param_3)


/* I3DLoadUtil::getVertexData(char const**, IndexedTriangleSet*, unsigned int) */

void I3DLoadUtil::getVertexData(char **param_1,IndexedTriangleSet *param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  char *pcVar3;
  long lVar4;
  char *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_80;
  undefined8 uStack_78;
  float fStack_68;
  float fStack_64;
  float afStack_60 [2];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pcVar3 = (char *)ExpatUtil::getAttr("p",param_1);
  if (pcVar3 != (char *)0x0) {
    lVar4 = StringUtil::atof(pcVar3,&fStack_68);
    lVar4 = StringUtil::atof((char *)(lVar4 + 1),&fStack_64);
    StringUtil::atof((char *)(lVar4 + 1),afStack_60);
    TriangleSet::setPosition((TriangleSet *)param_2,&fStack_68,param_3);
    uVar2 = TriangleSet::getAttributes();
    if ((uVar2 & 1) != 0) {
      pcVar5 = (char *)ExpatUtil::getAttr("n",param_1);
      lVar4 = StringUtil::atof(pcVar5,&fStack_68);
      lVar4 = StringUtil::atof((char *)(lVar4 + 1),&fStack_64);
      StringUtil::atof((char *)(lVar4 + 1),afStack_60);
      TriangleSet::setNormal((TriangleSet *)param_2,&fStack_68,param_3);
    }
    if (((uVar2 >> 1 & 1) != 0) &&
       (pcVar5 = (char *)ExpatUtil::getAttr("t0",param_1), pcVar5 != (char *)0x0)) {
      lVar4 = StringUtil::atof(pcVar5,(float *)&local_80);
      StringUtil::atof((char *)(lVar4 + 1),(float *)((long)&local_80 + 4));
      TriangleSet::setTexCoord((TriangleSet *)param_2,(float *)&local_80,0,param_3);
    }
    if (((uVar2 >> 2 & 1) != 0) &&
       (pcVar5 = (char *)ExpatUtil::getAttr("t1",param_1), pcVar5 != (char *)0x0)) {
      lVar4 = StringUtil::atof(pcVar5,(float *)&local_80);
      StringUtil::atof((char *)(lVar4 + 1),(float *)((long)&local_80 + 4));
      TriangleSet::setTexCoord((TriangleSet *)param_2,(float *)&local_80,1,param_3);
    }
    if (((uVar2 >> 3 & 1) != 0) &&
       (pcVar5 = (char *)ExpatUtil::getAttr("t2",param_1), pcVar5 != (char *)0x0)) {
      lVar4 = StringUtil::atof(pcVar5,(float *)&local_80);
      StringUtil::atof((char *)(lVar4 + 1),(float *)((long)&local_80 + 4));
      TriangleSet::setTexCoord((TriangleSet *)param_2,(float *)&local_80,2,param_3);
    }
    if (((uVar2 >> 4 & 1) != 0) &&
       (pcVar5 = (char *)ExpatUtil::getAttr("t3",param_1), pcVar5 != (char *)0x0)) {
      lVar4 = StringUtil::atof(pcVar5,(float *)&local_80);
      StringUtil::atof((char *)(lVar4 + 1),(float *)((long)&local_80 + 4));
      TriangleSet::setTexCoord((TriangleSet *)param_2,(float *)&local_80,3,param_3);
    }
    if ((uVar2 >> 5 & 1) != 0) {
      pcVar5 = (char *)ExpatUtil::getAttr("c",param_1);
      uStack_78 = 0x3f80000000000000;
      local_80 = 0;
      if (pcVar5 != (char *)0x0) {
        lVar4 = StringUtil::atof(pcVar5,(float *)&local_80);
        lVar4 = StringUtil::atof((char *)(lVar4 + 1),(float *)((ulong)&local_80 | 4));
        lVar4 = StringUtil::atof((char *)(lVar4 + 1),(float *)((ulong)&local_80 | 8));
        if (*(char *)(lVar4 + 1) != '\0') {
          StringUtil::atof((char *)(lVar4 + 1),(float *)((ulong)&local_80 | 0xc));
        }
      }
      TriangleSet::setColor((TriangleSet *)param_2,(float *)&local_80,param_3);
    }
    if ((uVar2 >> 6 & 1) != 0) {
      if ((((byte)param_2[0xd] & 1) == 0) &&
         (pcVar5 = (char *)ExpatUtil::getAttr("bw",param_1), pcVar5 != (char *)0x0)) {
        local_80 = 0;
        uStack_78 = 0;
        StringUtil::splitIntoFloats(pcVar5,(float *)&local_80,4,' ');
        fVar6 = (float)(local_80 >> 0x20);
        fVar7 = (float)((ulong)uStack_78 >> 0x20);
        fVar8 = (float)local_80 + fVar6 + (float)uStack_78 + fVar7;
        if (0.0 < fVar8) {
          fVar8 = 1.0 / fVar8;
          local_80 = CONCAT44(fVar6 * fVar8,(float)local_80 * fVar8);
          uStack_78 = CONCAT44(fVar7 * fVar8,(float)uStack_78 * fVar8);
        }
        TriangleSet::setBlendWeights((TriangleSet *)param_2,(float *)&local_80,param_3);
      }
      pcVar5 = (char *)ExpatUtil::getAttr("bi",param_1);
      if (pcVar5 != (char *)0x0) {
        local_80 = local_80 & 0xffffffff00000000;
        StringUtil::splitIntoUBytes(pcVar5,(uchar *)&local_80,4,' ');
        TriangleSet::setBlendIndices((TriangleSet *)param_2,(uchar *)&local_80,param_3);
      }
    }
    if ((uVar2 >> 9 & 1) != 0) {
      local_80 = local_80 & 0xffffffff00000000;
      ExpatUtil::getFloatAttr("g",(float *)&local_80,param_1);
      *(undefined4 *)(*(long *)(param_2 + 0x60) + (ulong)param_3 * 4) = (undefined4)local_80;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pcVar3 != (char *)0x0);
}


