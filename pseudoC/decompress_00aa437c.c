// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decompress
// Entry Point: 00aa437c
// Size: 11136 bytes
// Signature: undefined __cdecl decompress(uchar * param_1, uchar * param_2, bool param_3, int param_4, int param_5)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::astc::decompress(unsigned char*, unsigned char const*, bool, int, int) */

void basisu::astc::decompress(uchar *param_1,uchar *param_2,bool param_3,int param_4,int param_5)

{
  long lVar1;
  ulong *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  byte bVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [16];
  undefined auVar38 [16];
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined auVar42 [16];
  undefined auVar43 [16];
  undefined auVar44 [16];
  undefined auVar45 [16];
  undefined auVar46 [16];
  undefined auVar47 [16];
  undefined auVar48 [16];
  undefined auVar49 [16];
  undefined auVar50 [16];
  undefined auVar51 [16];
  float fVar52;
  uint3 uVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  bool bVar67;
  bool bVar68;
  bool bVar69;
  undefined4 *puVar70;
  int iVar71;
  ulong **ppuVar72;
  undefined (*pauVar73) [16];
  ulong uVar74;
  int iVar75;
  uint uVar76;
  uint uVar77;
  long lVar78;
  undefined8 *puVar79;
  uint *puVar80;
  uint uVar81;
  float *pfVar82;
  int *piVar83;
  int iVar84;
  uint uVar85;
  uint uVar86;
  float *pfVar87;
  uint uVar88;
  ulong uVar89;
  ulong uVar90;
  int iVar91;
  uint uVar92;
  uint uVar93;
  uint uVar94;
  uint uVar95;
  long lVar96;
  uint uVar97;
  uint uVar98;
  ulong uVar99;
  uchar *puVar100;
  ulong **ppuVar101;
  ulong uVar102;
  uint uVar103;
  uint uVar104;
  ulong uVar105;
  ulong uVar106;
  ulong uVar107;
  ulong **ppuVar108;
  uint uVar109;
  undefined4 uVar110;
  undefined4 uVar111;
  float fVar112;
  undefined8 uVar113;
  undefined8 uVar114;
  undefined auVar115 [13];
  undefined auVar116 [16];
  undefined auVar117 [16];
  undefined auVar118 [16];
  undefined auVar119 [16];
  undefined auVar120 [16];
  float fVar121;
  undefined8 uVar122;
  int iVar130;
  undefined auVar123 [13];
  undefined in_q1 [16];
  undefined auVar124 [16];
  undefined auVar125 [16];
  undefined auVar126 [16];
  undefined auVar127 [16];
  undefined auVar128 [16];
  undefined auVar129 [16];
  int iVar131;
  int iVar136;
  undefined auVar132 [16];
  undefined auVar133 [16];
  undefined auVar134 [16];
  undefined auVar135 [16];
  float fVar137;
  undefined8 uVar138;
  undefined auVar139 [16];
  undefined auVar140 [16];
  undefined auVar141 [16];
  undefined auVar142 [16];
  undefined auVar143 [16];
  undefined auVar144 [16];
  undefined auVar145 [16];
  undefined auVar146 [16];
  undefined auVar147 [16];
  undefined auVar148 [16];
  undefined auVar149 [16];
  undefined auVar150 [16];
  undefined auVar151 [16];
  undefined auVar152 [16];
  undefined auVar153 [16];
  undefined auVar154 [16];
  undefined auVar155 [16];
  undefined auVar156 [16];
  undefined auVar157 [16];
  undefined auVar158 [16];
  undefined auVar159 [16];
  undefined auVar160 [16];
  undefined auVar161 [16];
  undefined auVar162 [16];
  undefined auVar163 [16];
  undefined auVar164 [16];
  undefined auVar165 [16];
  undefined auVar166 [16];
  undefined auVar167 [16];
  undefined auVar168 [16];
  undefined auVar169 [16];
  undefined auVar170 [16];
  undefined auVar171 [16];
  undefined auVar172 [16];
  undefined auVar173 [16];
  undefined auVar174 [16];
  undefined auVar175 [16];
  undefined auVar176 [16];
  undefined8 uStack_1348;
  undefined8 uStack_1318;
  undefined8 uStack_1308;
  undefined8 local_12ec;
  ulong local_12e0 [2];
  float local_12d0 [576];
  ulong *local_9d0;
  uint local_9c8 [2];
  undefined local_9c0;
  undefined4 local_9bc;
  undefined8 local_550;
  undefined auStack_548 [8];
  undefined local_540 [8];
  undefined8 local_538;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined8 local_520;
  undefined8 local_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  uint local_4c8 [4];
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 auStack_4a8 [30];
  undefined local_3b8 [8];
  uint local_3b0 [2];
  undefined local_3a8;
  uint local_3a4 [187];
  long local_b8;
  
  lVar22 = tpidr_el0;
  uVar102 = (ulong)(uint)param_4;
  local_b8 = *(long *)(lVar22 + 0x28);
  bVar9 = *param_2;
  uVar53 = *(uint3 *)param_2;
  puVar2 = (ulong *)(param_2 + 8);
  uVar10 = param_2[9];
  uVar88 = *(uint *)param_2;
  uVar11 = param_2[0xb];
  uVar12 = param_2[0xd];
  local_12e0[0] = *(ulong *)param_2;
  uVar13 = param_2[0xf];
  local_12e0[1] = *puVar2;
  pfVar82 = (float *)param_1;
  if (!param_3) {
    pfVar82 = local_12d0;
  }
  uVar114 = SUB168(_DAT_004c32c0,0);
  uVar122 = SUB168(_DAT_004c32c0,8);
  if ((uVar53 & 0x1ff) == 0x1fc) {
    if ((param_2[1] >> 1 & 1) == 0) {
      uVar88 = uVar88 >> 0xc & 0x1fff;
      uVar103 = (uint)(local_12e0[0] >> 0x20);
      if ((((uVar88 & (uint)(local_12e0[0] >> 0x19) & uVar103 >> 6) != 0x1fff) ||
          (uVar103 >> 0x13 != 0x1fff)) &&
         ((((uint)(local_12e0[0] >> 0x19) & 0x1fff) <= uVar88 ||
          (uVar103 >> 0x13 <= (uVar103 >> 6 & 0x1fff))))) goto LAB_00aa4548;
      if (param_3) {
        uVar88 = param_5 * param_4;
        uVar102 = (ulong)uVar88;
        if ((int)uVar88 < 1) {
          bVar69 = true;
          goto LAB_00aa4e48;
        }
        if (uVar88 < 8) {
          uVar99 = 0;
        }
        else {
          if (uVar88 < 0x20) {
            uVar106 = 0;
          }
          else {
            uVar99 = uVar102 & 0xffffffe0;
            pfVar87 = pfVar82 + 0x10;
            uVar106 = uVar99;
            do {
              *(uchar *)pfVar87 = uVar10;
              *(uchar *)((long)pfVar87 + 1) = uVar11;
              *(uchar *)((long)pfVar87 + 2) = uVar12;
              *(uchar *)((long)pfVar87 + 3) = uVar13;
              *(uchar *)(pfVar87 + 1) = uVar10;
              *(uchar *)((long)pfVar87 + 5) = uVar11;
              *(uchar *)((long)pfVar87 + 6) = uVar12;
              *(uchar *)((long)pfVar87 + 7) = uVar13;
              *(uchar *)(pfVar87 + 2) = uVar10;
              *(uchar *)((long)pfVar87 + 9) = uVar11;
              *(uchar *)((long)pfVar87 + 10) = uVar12;
              *(uchar *)((long)pfVar87 + 0xb) = uVar13;
              *(uchar *)(pfVar87 + 3) = uVar10;
              *(uchar *)((long)pfVar87 + 0xd) = uVar11;
              *(uchar *)((long)pfVar87 + 0xe) = uVar12;
              *(uchar *)((long)pfVar87 + 0xf) = uVar13;
              *(uchar *)(pfVar87 + 4) = uVar10;
              *(uchar *)((long)pfVar87 + 0x11) = uVar11;
              *(uchar *)((long)pfVar87 + 0x12) = uVar12;
              *(uchar *)((long)pfVar87 + 0x13) = uVar13;
              *(uchar *)(pfVar87 + 5) = uVar10;
              *(uchar *)((long)pfVar87 + 0x15) = uVar11;
              *(uchar *)((long)pfVar87 + 0x16) = uVar12;
              *(uchar *)((long)pfVar87 + 0x17) = uVar13;
              *(uchar *)(pfVar87 + 6) = uVar10;
              *(uchar *)((long)pfVar87 + 0x19) = uVar11;
              *(uchar *)((long)pfVar87 + 0x1a) = uVar12;
              *(uchar *)((long)pfVar87 + 0x1b) = uVar13;
              *(uchar *)(pfVar87 + 7) = uVar10;
              *(uchar *)((long)pfVar87 + 0x1d) = uVar11;
              *(uchar *)((long)pfVar87 + 0x1e) = uVar12;
              *(uchar *)((long)pfVar87 + 0x1f) = uVar13;
              *(uchar *)(pfVar87 + 8) = uVar10;
              *(uchar *)((long)pfVar87 + 0x21) = uVar11;
              *(uchar *)((long)pfVar87 + 0x22) = uVar12;
              *(uchar *)((long)pfVar87 + 0x23) = uVar13;
              *(uchar *)(pfVar87 + 9) = uVar10;
              *(uchar *)((long)pfVar87 + 0x25) = uVar11;
              *(uchar *)((long)pfVar87 + 0x26) = uVar12;
              *(uchar *)((long)pfVar87 + 0x27) = uVar13;
              *(uchar *)(pfVar87 + 10) = uVar10;
              *(uchar *)((long)pfVar87 + 0x29) = uVar11;
              *(uchar *)((long)pfVar87 + 0x2a) = uVar12;
              *(uchar *)((long)pfVar87 + 0x2b) = uVar13;
              *(uchar *)(pfVar87 + 0xb) = uVar10;
              *(uchar *)((long)pfVar87 + 0x2d) = uVar11;
              *(uchar *)((long)pfVar87 + 0x2e) = uVar12;
              *(uchar *)((long)pfVar87 + 0x2f) = uVar13;
              *(uchar *)(pfVar87 + 0xc) = uVar10;
              *(uchar *)((long)pfVar87 + 0x31) = uVar11;
              *(uchar *)((long)pfVar87 + 0x32) = uVar12;
              *(uchar *)((long)pfVar87 + 0x33) = uVar13;
              *(uchar *)(pfVar87 + 0xd) = uVar10;
              *(uchar *)((long)pfVar87 + 0x35) = uVar11;
              *(uchar *)((long)pfVar87 + 0x36) = uVar12;
              *(uchar *)((long)pfVar87 + 0x37) = uVar13;
              *(uchar *)(pfVar87 + 0xe) = uVar10;
              *(uchar *)((long)pfVar87 + 0x39) = uVar11;
              *(uchar *)((long)pfVar87 + 0x3a) = uVar12;
              *(uchar *)((long)pfVar87 + 0x3b) = uVar13;
              *(uchar *)(pfVar87 + 0xf) = uVar10;
              *(uchar *)((long)pfVar87 + 0x3d) = uVar11;
              *(uchar *)((long)pfVar87 + 0x3e) = uVar12;
              *(uchar *)((long)pfVar87 + 0x3f) = uVar13;
              uVar106 = uVar106 - 0x20;
              *(uchar *)(pfVar87 + -0x10) = uVar10;
              *(uchar *)((long)pfVar87 + -0x3f) = uVar11;
              *(uchar *)((long)pfVar87 + -0x3e) = uVar12;
              *(uchar *)((long)pfVar87 + -0x3d) = uVar13;
              *(uchar *)(pfVar87 + -0xf) = uVar10;
              *(uchar *)((long)pfVar87 + -0x3b) = uVar11;
              *(uchar *)((long)pfVar87 + -0x3a) = uVar12;
              *(uchar *)((long)pfVar87 + -0x39) = uVar13;
              *(uchar *)(pfVar87 + -0xe) = uVar10;
              *(uchar *)((long)pfVar87 + -0x37) = uVar11;
              *(uchar *)((long)pfVar87 + -0x36) = uVar12;
              *(uchar *)((long)pfVar87 + -0x35) = uVar13;
              *(uchar *)(pfVar87 + -0xd) = uVar10;
              *(uchar *)((long)pfVar87 + -0x33) = uVar11;
              *(uchar *)((long)pfVar87 + -0x32) = uVar12;
              *(uchar *)((long)pfVar87 + -0x31) = uVar13;
              *(uchar *)(pfVar87 + -0xc) = uVar10;
              *(uchar *)((long)pfVar87 + -0x2f) = uVar11;
              *(uchar *)((long)pfVar87 + -0x2e) = uVar12;
              *(uchar *)((long)pfVar87 + -0x2d) = uVar13;
              *(uchar *)(pfVar87 + -0xb) = uVar10;
              *(uchar *)((long)pfVar87 + -0x2b) = uVar11;
              *(uchar *)((long)pfVar87 + -0x2a) = uVar12;
              *(uchar *)((long)pfVar87 + -0x29) = uVar13;
              *(uchar *)(pfVar87 + -10) = uVar10;
              *(uchar *)((long)pfVar87 + -0x27) = uVar11;
              *(uchar *)((long)pfVar87 + -0x26) = uVar12;
              *(uchar *)((long)pfVar87 + -0x25) = uVar13;
              *(uchar *)(pfVar87 + -9) = uVar10;
              *(uchar *)((long)pfVar87 + -0x23) = uVar11;
              *(uchar *)((long)pfVar87 + -0x22) = uVar12;
              *(uchar *)((long)pfVar87 + -0x21) = uVar13;
              *(uchar *)(pfVar87 + -8) = uVar10;
              *(uchar *)((long)pfVar87 + -0x1f) = uVar11;
              *(uchar *)((long)pfVar87 + -0x1e) = uVar12;
              *(uchar *)((long)pfVar87 + -0x1d) = uVar13;
              *(uchar *)(pfVar87 + -7) = uVar10;
              *(uchar *)((long)pfVar87 + -0x1b) = uVar11;
              *(uchar *)((long)pfVar87 + -0x1a) = uVar12;
              *(uchar *)((long)pfVar87 + -0x19) = uVar13;
              *(uchar *)(pfVar87 + -6) = uVar10;
              *(uchar *)((long)pfVar87 + -0x17) = uVar11;
              *(uchar *)((long)pfVar87 + -0x16) = uVar12;
              *(uchar *)((long)pfVar87 + -0x15) = uVar13;
              *(uchar *)(pfVar87 + -5) = uVar10;
              *(uchar *)((long)pfVar87 + -0x13) = uVar11;
              *(uchar *)((long)pfVar87 + -0x12) = uVar12;
              *(uchar *)((long)pfVar87 + -0x11) = uVar13;
              *(uchar *)(pfVar87 + -4) = uVar10;
              *(uchar *)((long)pfVar87 + -0xf) = uVar11;
              *(uchar *)((long)pfVar87 + -0xe) = uVar12;
              *(uchar *)((long)pfVar87 + -0xd) = uVar13;
              *(uchar *)(pfVar87 + -3) = uVar10;
              *(uchar *)((long)pfVar87 + -0xb) = uVar11;
              *(uchar *)((long)pfVar87 + -10) = uVar12;
              *(uchar *)((long)pfVar87 + -9) = uVar13;
              *(uchar *)(pfVar87 + -2) = uVar10;
              *(uchar *)((long)pfVar87 + -7) = uVar11;
              *(uchar *)((long)pfVar87 + -6) = uVar12;
              *(uchar *)((long)pfVar87 + -5) = uVar13;
              *(uchar *)(pfVar87 + -1) = uVar10;
              *(uchar *)((long)pfVar87 + -3) = uVar11;
              *(uchar *)((long)pfVar87 + -2) = uVar12;
              *(uchar *)((long)pfVar87 + -1) = uVar13;
              pfVar87 = pfVar87 + 0x20;
            } while (uVar106 != 0);
            if (uVar99 == uVar102) goto LAB_00aa4a7c;
            uVar106 = uVar99;
            if ((uVar88 & 0x18) == 0) goto LAB_00aa4a54;
          }
          uVar99 = uVar102 & 0xfffffff8;
          auVar124[1] = uVar10;
          auVar124[0] = uVar10;
          pfVar87 = pfVar82 + uVar106;
          lVar96 = uVar106 - uVar99;
          auVar124[2] = uVar10;
          auVar124[3] = uVar10;
          auVar124[4] = uVar10;
          auVar124[5] = uVar10;
          auVar124[6] = uVar10;
          auVar124[7] = uVar10;
          auVar124[8] = uVar11;
          auVar124[9] = uVar11;
          auVar124[10] = uVar11;
          auVar124[11] = uVar11;
          auVar124[12] = uVar11;
          auVar124[13] = uVar11;
          auVar124[14] = uVar11;
          auVar124[15] = uVar11;
          auVar117[1] = uVar12;
          auVar117[0] = uVar12;
          auVar117[2] = uVar12;
          auVar117[3] = uVar12;
          auVar117[4] = uVar12;
          auVar117[5] = uVar12;
          auVar117[6] = uVar12;
          auVar117[7] = uVar12;
          auVar117[8] = uVar13;
          auVar117[9] = uVar13;
          auVar117[10] = uVar13;
          auVar117[11] = uVar13;
          auVar117[12] = uVar13;
          auVar117[13] = uVar13;
          auVar117[14] = uVar13;
          auVar117[15] = uVar13;
          auVar124 = NEON_ext(auVar124,auVar124,8,1);
          auVar117 = NEON_ext(auVar117,auVar117,8,1);
          do {
            *(uchar *)pfVar87 = uVar10;
            *(char *)((long)pfVar87 + 1) = auVar124[0];
            *(uchar *)((long)pfVar87 + 2) = uVar12;
            *(char *)((long)pfVar87 + 3) = auVar117[0];
            *(uchar *)(pfVar87 + 1) = uVar10;
            *(char *)((long)pfVar87 + 5) = auVar124[1];
            *(uchar *)((long)pfVar87 + 6) = uVar12;
            *(char *)((long)pfVar87 + 7) = auVar117[1];
            *(uchar *)(pfVar87 + 2) = uVar10;
            *(char *)((long)pfVar87 + 9) = auVar124[2];
            *(uchar *)((long)pfVar87 + 10) = uVar12;
            *(char *)((long)pfVar87 + 0xb) = auVar117[2];
            *(uchar *)(pfVar87 + 3) = uVar10;
            *(char *)((long)pfVar87 + 0xd) = auVar124[3];
            *(uchar *)((long)pfVar87 + 0xe) = uVar12;
            *(char *)((long)pfVar87 + 0xf) = auVar117[3];
            *(uchar *)(pfVar87 + 4) = uVar10;
            *(char *)((long)pfVar87 + 0x11) = auVar124[4];
            *(uchar *)((long)pfVar87 + 0x12) = uVar12;
            *(char *)((long)pfVar87 + 0x13) = auVar117[4];
            *(uchar *)(pfVar87 + 5) = uVar10;
            *(char *)((long)pfVar87 + 0x15) = auVar124[5];
            *(uchar *)((long)pfVar87 + 0x16) = uVar12;
            *(char *)((long)pfVar87 + 0x17) = auVar117[5];
            *(uchar *)(pfVar87 + 6) = uVar10;
            *(char *)((long)pfVar87 + 0x19) = auVar124[6];
            *(uchar *)((long)pfVar87 + 0x1a) = uVar12;
            *(char *)((long)pfVar87 + 0x1b) = auVar117[6];
            *(uchar *)(pfVar87 + 7) = uVar10;
            *(char *)((long)pfVar87 + 0x1d) = auVar124[7];
            *(uchar *)((long)pfVar87 + 0x1e) = uVar12;
            *(char *)((long)pfVar87 + 0x1f) = auVar117[7];
            pfVar87 = pfVar87 + 8;
            lVar96 = lVar96 + 8;
          } while (lVar96 != 0);
          if (uVar99 == uVar102) goto LAB_00aa4a7c;
        }
LAB_00aa4a54:
        lVar96 = uVar102 - uVar99;
        puVar100 = (uchar *)((long)pfVar82 + uVar99 * 4 + 3);
        do {
          lVar96 = lVar96 + -1;
          puVar100[-3] = uVar10;
          puVar100[-2] = uVar11;
          puVar100[-1] = uVar12;
          *puVar100 = uVar13;
          puVar100 = puVar100 + 4;
        } while (lVar96 != 0);
LAB_00aa4a7c:
        bVar67 = false;
      }
      else {
        uVar88 = param_5 * param_4;
        uVar102 = (ulong)uVar88;
        if ((int)uVar88 < 1) goto LAB_00aa4a7c;
        uVar103 = *(uint *)puVar2 & 0xffff;
        uVar77 = *(uint *)puVar2 >> 0x10;
        fVar112 = 1.0;
        if (uVar103 != 0xffff) {
          fVar112 = (float)(ulong)uVar103 * 1.525879e-05;
        }
        fVar121 = 1.0;
        if (uVar77 != 0xffff) {
          fVar121 = (float)(ulong)uVar77 * 1.525879e-05;
        }
        fVar52 = 1.0;
        if ((short)(*(uint6 *)puVar2 >> 0x20) != -1) {
          fVar52 = (float)(ulong)(*(uint6 *)puVar2 >> 0x20) * 1.525879e-05;
        }
        fVar137 = 1.0;
        if ((short)(local_12e0[1] >> 0x30) != -1) {
          fVar137 = (float)(local_12e0[1] >> 0x30) * 1.525879e-05;
        }
        if (uVar88 < 8) {
          uVar99 = 0;
        }
        else {
          uVar99 = uVar102 & 0xfffffff8;
          pfVar87 = pfVar82 + 0x10;
          uVar106 = uVar99;
          do {
            *pfVar87 = fVar112;
            pfVar87[1] = fVar121;
            pfVar87[2] = fVar52;
            pfVar87[3] = fVar137;
            pfVar87[4] = fVar112;
            pfVar87[5] = fVar121;
            pfVar87[6] = fVar52;
            pfVar87[7] = fVar137;
            pfVar87[8] = fVar112;
            pfVar87[9] = fVar121;
            pfVar87[10] = fVar52;
            pfVar87[0xb] = fVar137;
            pfVar87[0xc] = fVar112;
            pfVar87[0xd] = fVar121;
            pfVar87[0xe] = fVar52;
            pfVar87[0xf] = fVar137;
            uVar106 = uVar106 - 8;
            pfVar87[-0x10] = fVar112;
            pfVar87[-0xf] = fVar121;
            pfVar87[-0xe] = fVar52;
            pfVar87[-0xd] = fVar137;
            pfVar87[-0xc] = fVar112;
            pfVar87[-0xb] = fVar121;
            pfVar87[-10] = fVar52;
            pfVar87[-9] = fVar137;
            pfVar87[-8] = fVar112;
            pfVar87[-7] = fVar121;
            pfVar87[-6] = fVar52;
            pfVar87[-5] = fVar137;
            pfVar87[-4] = fVar112;
            pfVar87[-3] = fVar121;
            pfVar87[-2] = fVar52;
            pfVar87[-1] = fVar137;
            pfVar87 = pfVar87 + 0x20;
          } while (uVar106 != 0);
          if (uVar99 == uVar102) goto LAB_00aa4a7c;
        }
        lVar96 = uVar102 - uVar99;
        pfVar82 = pfVar82 + uVar99 * 4 + 2;
        do {
          pfVar82[-2] = fVar112;
          lVar96 = lVar96 + -1;
          pfVar82[-1] = fVar121;
          *pfVar82 = fVar52;
          pfVar82[1] = fVar137;
          pfVar82 = pfVar82 + 4;
        } while (lVar96 != 0);
        bVar67 = false;
      }
      goto LAB_00aa6b20;
    }
LAB_00aa4548:
    if (param_3) {
      uVar88 = param_5 * param_4;
      uVar102 = (ulong)uVar88;
      if (0 < (int)uVar88) {
        if (uVar88 < 8) {
          uVar99 = 0;
        }
        else {
          if (uVar88 < 0x20) {
            uVar106 = 0;
          }
          else {
            uVar99 = uVar102 & 0xffffffe0;
            puVar79 = (undefined8 *)(pfVar82 + 0x10);
            uVar106 = uVar99;
            do {
              uVar106 = uVar106 - 0x20;
              puVar79[-3] = 0xffff00ffffff00ff;
              puVar79[-4] = 0xffff00ffffff00ff;
              puVar79[-1] = 0xffff00ffffff00ff;
              puVar79[-2] = 0xffff00ffffff00ff;
              puVar79[-7] = 0xffff00ffffff00ff;
              puVar79[-8] = 0xffff00ffffff00ff;
              puVar79[-5] = 0xffff00ffffff00ff;
              puVar79[-6] = 0xffff00ffffff00ff;
              puVar79[5] = 0xffff00ffffff00ff;
              puVar79[4] = 0xffff00ffffff00ff;
              puVar79[7] = 0xffff00ffffff00ff;
              puVar79[6] = 0xffff00ffffff00ff;
              puVar79[1] = 0xffff00ffffff00ff;
              *puVar79 = 0xffff00ffffff00ff;
              puVar79[3] = 0xffff00ffffff00ff;
              puVar79[2] = 0xffff00ffffff00ff;
              puVar79 = puVar79 + 0x10;
            } while (uVar106 != 0);
            if (uVar99 == uVar102) goto LAB_00aa4e44;
            uVar106 = uVar99;
            if ((uVar88 & 0x18) == 0) goto LAB_00aa48a8;
          }
          uVar99 = uVar102 & 0xfffffff8;
          lVar96 = uVar106 - uVar99;
          puVar79 = (undefined8 *)(pfVar82 + uVar106);
          do {
            lVar96 = lVar96 + 8;
            puVar79[1] = 0xffff00ffffff00ff;
            *puVar79 = 0xffff00ffffff00ff;
            puVar79[3] = 0xffff00ffffff00ff;
            puVar79[2] = 0xffff00ffffff00ff;
            puVar79 = puVar79 + 4;
          } while (lVar96 != 0);
          if (uVar99 == uVar102) goto LAB_00aa4e44;
        }
LAB_00aa48a8:
        lVar78 = uVar102 - uVar99;
        lVar96 = (long)pfVar82 + uVar99 * 4 + 3;
        do {
          *(undefined4 *)(lVar96 + -3) = 0xffff00ff;
          lVar78 = lVar78 + -1;
          lVar96 = lVar96 + 4;
        } while (lVar78 != 0);
      }
    }
    else {
      uVar88 = param_5 * param_4;
      uVar102 = (ulong)uVar88;
      if (0 < (int)uVar88) {
        if (uVar88 < 8) {
          uVar99 = 0;
        }
        else {
          uVar99 = uVar102 & 0xfffffff8;
          puVar79 = (undefined8 *)(pfVar82 + 0x10);
          uVar106 = uVar99;
          do {
            uVar106 = uVar106 - 8;
            puVar79[-3] = uVar122;
            puVar79[-4] = uVar114;
            puVar79[-1] = uVar122;
            puVar79[-2] = uVar114;
            puVar79[-7] = uVar122;
            puVar79[-8] = uVar114;
            puVar79[-5] = uVar122;
            puVar79[-6] = uVar114;
            puVar79[5] = uVar122;
            puVar79[4] = uVar114;
            puVar79[7] = uVar122;
            puVar79[6] = uVar114;
            puVar79[1] = uVar122;
            *puVar79 = uVar114;
            puVar79[3] = uVar122;
            puVar79[2] = uVar114;
            puVar79 = puVar79 + 0x10;
          } while (uVar106 != 0);
          if (uVar99 == uVar102) goto LAB_00aa4e44;
        }
        auVar124 = _DAT_004c32c0;
        lVar96 = uVar102 - uVar99;
        puVar79 = (undefined8 *)(pfVar82 + uVar99 * 4);
        do {
          lVar96 = lVar96 + -1;
          puVar79[1] = auVar124._8_8_;
          *puVar79 = auVar124._0_8_;
          puVar79 = puVar79 + 2;
        } while (lVar96 != 0);
      }
    }
    goto LAB_00aa4e44;
  }
  uVar103 = uVar53 & 0x7ff;
  if ((bVar9 & 3) != 0) {
    if ((bVar9 & 0xf) == 0) goto LAB_00aa45b4;
    uVar95 = uVar88 >> 2 & 3;
    uVar104 = uVar88 >> 5 & 3;
    uVar77 = uVar88 >> 4 & 1 | (uVar53 & 3) << 1;
    if (uVar95 == 3) {
      uVar109 = uVar104 + 2;
      uVar95 = uVar103 >> 7 & 1 | 6;
      if ((param_2[1] & 1) != 0) {
        uVar109 = uVar103 >> 7 & 1 | 2;
        uVar95 = uVar104 + 2;
      }
    }
    else {
      uVar4 = uVar103 >> 7 & 3;
      if (uVar95 == 2) {
        uVar109 = uVar104 + 2;
        uVar95 = uVar4 | 8;
      }
      else if (uVar95 == 1) {
        uVar109 = uVar4 | 8;
        uVar95 = uVar104 + 2;
      }
      else if (uVar95 == 0) {
        uVar109 = uVar4 | 4;
        uVar95 = uVar104 + 2;
      }
      else {
        uVar109 = 0xffffffff;
        uVar95 = 0xffffffff;
      }
    }
LAB_00aa4ad0:
    uVar103 = uVar103 >> 10;
    if ((uVar53 & 0x200) == 0) goto LAB_00aa4aec;
    uVar104 = uVar77;
    switch(uVar77) {
    case 2:
      local_12ec = 0x100000001;
      uVar104 = 1;
      goto LAB_00aa4c00;
    case 3:
      uVar104 = 2;
      local_12ec = 0x200000000;
      goto LAB_00aa4bac;
    case 4:
      break;
    case 5:
      uVar104 = 2;
      local_12ec = 0x200000001;
LAB_00aa4c00:
      bVar67 = uVar103 == 0;
      bVar69 = true;
      iVar75 = 1;
      if (!bVar67) {
        iVar75 = 2;
      }
      uVar77 = 1;
      iVar75 = uVar109 * uVar95 * iVar75;
      iVar71 = 1;
      iVar84 = (iVar75 * 7 + 2U) / 3 + iVar75 * uVar104;
      goto LAB_00aa4c74;
    case 6:
      uVar104 = 3;
      local_12ec = 0x300000000;
      goto LAB_00aa4bac;
    case 7:
      uVar104 = 5;
      break;
    default:
      goto switchD_00aa4b40_caseD_6;
    }
    goto switchD_00aa4b10_caseD_2;
  }
  if (((~uVar88 & 0x1c0) == 0) || ((bVar9 & 0xf) == 0)) {
LAB_00aa45b4:
    if (param_3) {
      uVar88 = param_5 * param_4;
      uVar102 = (ulong)uVar88;
      if (0 < (int)uVar88) {
        if (uVar88 < 8) {
          uVar99 = 0;
        }
        else {
          if (uVar88 < 0x20) {
            uVar106 = 0;
          }
          else {
            uVar99 = uVar102 & 0xffffffe0;
            puVar79 = (undefined8 *)(pfVar82 + 0x10);
            uVar106 = uVar99;
            do {
              uVar106 = uVar106 - 0x20;
              puVar79[-3] = 0xffff00ffffff00ff;
              puVar79[-4] = 0xffff00ffffff00ff;
              puVar79[-1] = 0xffff00ffffff00ff;
              puVar79[-2] = 0xffff00ffffff00ff;
              puVar79[-7] = 0xffff00ffffff00ff;
              puVar79[-8] = 0xffff00ffffff00ff;
              puVar79[-5] = 0xffff00ffffff00ff;
              puVar79[-6] = 0xffff00ffffff00ff;
              puVar79[5] = 0xffff00ffffff00ff;
              puVar79[4] = 0xffff00ffffff00ff;
              puVar79[7] = 0xffff00ffffff00ff;
              puVar79[6] = 0xffff00ffffff00ff;
              puVar79[1] = 0xffff00ffffff00ff;
              *puVar79 = 0xffff00ffffff00ff;
              puVar79[3] = 0xffff00ffffff00ff;
              puVar79[2] = 0xffff00ffffff00ff;
              puVar79 = puVar79 + 0x10;
            } while (uVar106 != 0);
            if (uVar99 == uVar102) goto LAB_00aa4e44;
            uVar106 = uVar99;
            if ((uVar88 & 0x18) == 0) goto LAB_00aa4938;
          }
          uVar99 = uVar102 & 0xfffffff8;
          lVar96 = uVar106 - uVar99;
          puVar79 = (undefined8 *)(pfVar82 + uVar106);
          do {
            lVar96 = lVar96 + 8;
            puVar79[1] = 0xffff00ffffff00ff;
            *puVar79 = 0xffff00ffffff00ff;
            puVar79[3] = 0xffff00ffffff00ff;
            puVar79[2] = 0xffff00ffffff00ff;
            puVar79 = puVar79 + 4;
          } while (lVar96 != 0);
          if (uVar99 == uVar102) goto LAB_00aa4e44;
        }
LAB_00aa4938:
        lVar78 = uVar102 - uVar99;
        lVar96 = (long)pfVar82 + uVar99 * 4 + 3;
        do {
          *(undefined4 *)(lVar96 + -3) = 0xffff00ff;
          lVar78 = lVar78 + -1;
          lVar96 = lVar96 + 4;
        } while (lVar78 != 0);
      }
    }
    else {
      uVar88 = param_5 * param_4;
      uVar102 = (ulong)uVar88;
      if (0 < (int)uVar88) {
        if (uVar88 < 8) {
          uVar99 = 0;
        }
        else {
          uVar99 = uVar102 & 0xfffffff8;
          puVar79 = (undefined8 *)(pfVar82 + 0x10);
          uVar106 = uVar99;
          do {
            uVar106 = uVar106 - 8;
            puVar79[-3] = uVar122;
            puVar79[-4] = uVar114;
            puVar79[-1] = uVar122;
            puVar79[-2] = uVar114;
            puVar79[-7] = uVar122;
            puVar79[-8] = uVar114;
            puVar79[-5] = uVar122;
            puVar79[-6] = uVar114;
            puVar79[5] = uVar122;
            puVar79[4] = uVar114;
            puVar79[7] = uVar122;
            puVar79[6] = uVar114;
            puVar79[1] = uVar122;
            *puVar79 = uVar114;
            puVar79[3] = uVar122;
            puVar79[2] = uVar114;
            puVar79 = puVar79 + 0x10;
          } while (uVar106 != 0);
          if (uVar99 == uVar102) goto LAB_00aa4e44;
        }
        auVar124 = _DAT_004c32c0;
        lVar96 = uVar102 - uVar99;
        puVar79 = (undefined8 *)(pfVar82 + uVar99 * 4);
        do {
          lVar96 = lVar96 + -1;
          puVar79[1] = auVar124._8_8_;
          *puVar79 = auVar124._0_8_;
          puVar79 = puVar79 + 2;
        } while (lVar96 != 0);
      }
    }
    goto LAB_00aa4e44;
  }
  uVar95 = uVar88 >> 7 & 3;
  uVar77 = (uVar53 & 0xc) >> 1 | (uVar53 & 0x10) >> 4;
  if (uVar95 == 3) {
    uVar109 = 6;
    uVar95 = 10;
    if ((bVar9 & 0x20) != 0) {
      uVar95 = 6;
      uVar109 = 10;
    }
  }
  else {
    uVar104 = uVar88 >> 5 & 3;
    if (uVar95 == 2) {
      uVar109 = uVar104 + 6;
      uVar95 = (uVar103 >> 9) + 6;
    }
    else if (uVar95 == 1) {
      uVar109 = uVar104 + 2;
      uVar95 = 0xc;
    }
    else if (uVar95 == 0) {
      uVar109 = 0xc;
      uVar95 = uVar104 + 2;
    }
    else {
      uVar109 = 0xffffffff;
      uVar95 = 0xffffffff;
    }
  }
  if ((uVar53 & 0x183) != 0x100) goto LAB_00aa4ad0;
  uVar103 = 0;
LAB_00aa4aec:
  if (5 < uVar77 - 2) {
switchD_00aa4b40_caseD_6:
    local_12ec = 2;
    uVar104 = 0;
    goto LAB_00aa4c4c;
  }
  uVar104 = 1;
  switch(uVar77) {
  case 3:
    uVar104 = 0;
    local_12ec = 0;
    goto LAB_00aa4bac;
  case 4:
    uVar104 = 2;
    break;
  case 5:
    uVar104 = 0;
    local_12ec = 1;
    goto LAB_00aa4c00;
  case 6:
    uVar104 = 1;
    local_12ec = 0x100000000;
LAB_00aa4bac:
    bVar67 = uVar103 == 0;
    bVar69 = true;
    iVar75 = 1;
    if (!bVar67) {
      iVar75 = 2;
    }
    uVar77 = 0;
    iVar71 = 0;
    iVar75 = uVar109 * uVar95 * iVar75;
    iVar84 = (iVar75 * 8 | 4U) / 5 + iVar75 * uVar104;
    goto LAB_00aa4c74;
  case 7:
    uVar104 = 3;
  }
switchD_00aa4b10_caseD_2:
  local_12ec = CONCAT44(uVar104,2);
LAB_00aa4c4c:
  bVar67 = uVar103 == 0;
  bVar69 = false;
  iVar75 = 1;
  if (!bVar67) {
    iVar75 = 2;
  }
  uVar77 = 0;
  iVar71 = 2;
  iVar75 = uVar109 * uVar95 * iVar75;
  iVar84 = iVar75 * uVar104;
LAB_00aa4c74:
  if ((((iVar75 < 0x41) && (0xffffffb6 < iVar84 - 0x61U)) && ((int)uVar109 <= param_4)) &&
     ((int)uVar95 <= param_5)) {
    uVar14 = uVar88 >> 0xb & 3;
    uVar4 = uVar14 + 1;
    uVar106 = (ulong)uVar4;
    if ((bool)(uVar4 != 4 | bVar67)) {
      if (uVar14 == 0) {
        iVar75 = 0x80;
        if (!bVar67) {
          iVar75 = 0x7e;
        }
        iVar91 = 0x80 - iVar84;
        iVar75 = (iVar75 - iVar84) + -0x11;
        local_4c8[0] = uVar88 >> 0xd & 0xf;
        uVar99 = 1;
        in_q1 = in_q1;
      }
      else {
        iVar131 = 0x80;
        if (!bVar67) {
          iVar131 = 0x7e;
        }
        if ((uVar88 & 0x1800000) == 0) {
          iVar91 = 0x80 - iVar84;
          iVar75 = -0x1d;
        }
        else {
          iVar75 = uVar4 * -3 + -0x19;
          if (uVar4 == 4) {
            iVar91 = -7;
          }
          else {
            if (uVar4 == 3) {
              iVar91 = 0x7b - iVar84;
              goto LAB_00aa4ec8;
            }
            iVar91 = -1;
          }
          iVar91 = iVar91 + (0x7f - iVar84);
        }
LAB_00aa4ec8:
        uVar88 = uVar88 >> 0x17 & 3;
        iVar75 = (iVar131 - iVar84) + iVar75;
        uVar99 = uVar106;
        if (uVar88 == 0) {
          auVar127._8_8_ = uVar106 - 1;
          auVar127._0_8_ = uVar106 - 1;
          uVar88 = param_2[3] >> 1 & 0xf;
          auVar124 = NEON_cmhs(auVar127,_DAT_004c34b0,8);
          if ((auVar124 & (undefined  [16])0x1) != (undefined  [16])0x0) {
            local_4c8[0] = uVar88;
          }
          if ((auVar124 & (undefined  [16])0x1) != (undefined  [16])0x0) {
            local_4c8[1] = uVar88;
          }
          in_q1 = ZEXT416(auVar124._8_4_) << 0x20;
          if ((uVar14 + 2 & 0xe) != 2) {
            auVar124 = NEON_cmhi(auVar127,_DAT_004c3ba0,8);
            if ((auVar124 & (undefined  [16])0x1) != (undefined  [16])0x0) {
              local_4c8[2] = uVar88;
            }
            in_q1 = _DAT_004c3ba0;
            if ((auVar124 & (undefined  [16])0x1) != (undefined  [16])0x0) {
              local_4c8[3] = uVar88;
            }
          }
        }
        else {
          iVar84 = 0;
          uVar89 = 0;
          iVar131 = iVar91 + -2;
          do {
            iVar136 = uVar14 + iVar84;
            iVar84 = iVar84 + 2;
            iVar130 = 0x19;
            if (3 < iVar136 + 1U) {
              iVar130 = iVar91 + -4;
            }
            iVar5 = iVar136 + iVar130 + 1;
            iVar130 = iVar136 + iVar130 + 0x40;
            if (-1 < iVar5) {
              iVar130 = iVar5;
            }
            uVar85 = iVar136 + 0x1b;
            if (3 < iVar136 + 2U) {
              uVar85 = uVar14 + iVar131;
            }
            uVar92 = uVar85 + 0x3f;
            if (-1 < (int)uVar85) {
              uVar92 = uVar85;
            }
            iVar131 = iVar131 + 2;
            local_4c8[uVar89] =
                 (uVar88 - ((local_12e0[uVar89 + 0x19 >> 6 & 0x3ffffff] >> (uVar89 + 0x19 & 0x3f) &
                            1) == 0)) * 4 |
                 ((uint)(local_12e0[(int)uVar92 >> 6] >> ((ulong)uVar85 & 0x3f)) & 1) << 1 |
                 (uint)(local_12e0[iVar130 >> 6] >> ((ulong)(uint)(iVar5 % 0x40) & 0x3f)) & 1;
            uVar89 = uVar89 + 1;
          } while (uVar106 != uVar89);
        }
      }
      uVar88 = local_4c8[0] >> 1 & 0x7ffffffe;
      if (uVar99 == 1) {
        uVar88 = uVar88 + 2;
      }
      else {
        uVar88 = uVar88 + (local_4c8[1] >> 1 & 0x7ffffffe) + 4;
        if ((uVar99 != 2) && (uVar88 = uVar88 + (local_4c8[2] >> 1 & 0x7ffffffe) + 2, uVar99 != 3))
        {
          uVar88 = uVar88 + (local_4c8[3] >> 1 & 0x7ffffffe) + 2;
        }
      }
      if (((int)uVar88 < 0x13) && ((int)((uVar88 * 0xd + 4) / 5) <= iVar75)) {
        uVar85 = 6;
        uVar97 = 8;
        uVar99 = 1;
        uVar92 = 5;
        uStack_4e8 = 0;
        local_4f0 = 0;
        uStack_4d8 = 0;
        uStack_4e0 = 0;
        uStack_508 = 0;
        local_510 = 0;
        uStack_4f8 = 0;
        uStack_500 = 0;
        uStack_528 = 0;
        local_530 = 0;
        local_518 = 0;
        local_520 = 0;
        auStack_548 = (undefined  [8])0x0;
        local_550 = 0;
        local_538 = 0;
        local_540 = (undefined  [8])0x0;
        while( true ) {
          uVar93 = 0xffffffff;
          if (0 < (int)uVar97) {
            uVar93 = ~(-1 << (ulong)(uVar97 & 0x1f));
          }
          while( true ) {
            uVar86 = (5 << (ulong)(uVar92 & 0x1f)) - 1;
            iVar84 = (uVar88 << 3 | 4) / 5 + uVar88 * uVar85;
            if ((int)uVar92 < 1) {
              uVar86 = 0xffffffff;
            }
            while( true ) {
              uVar81 = (3 << (ulong)(uVar85 & 0x1f)) - 1;
              if ((int)uVar85 < 1) {
                uVar81 = 0xffffffff;
              }
              uVar76 = uVar81;
              if ((int)uVar81 <= (int)uVar86) {
                uVar76 = uVar86;
              }
              if ((int)uVar76 <= (int)uVar93) {
                uVar76 = uVar93;
              }
              if (uVar76 != uVar81) break;
              if (iVar84 <= iVar75) {
                uVar99 = 0;
                uVar92 = uVar85;
                goto LAB_00aa5208;
              }
              uVar85 = uVar85 - 1;
              iVar84 = iVar84 - uVar88;
            }
            if (uVar76 != uVar86) break;
            if ((int)((uVar88 * 7 + 2) / 3 + uVar92 * uVar88) <= iVar75) goto LAB_00aa5208;
            uVar92 = uVar92 - 1;
          }
          if ((int)(uVar97 * uVar88) <= iVar75) break;
          uVar97 = uVar97 - 1;
        }
        uVar99 = 2;
        uVar92 = uVar97;
LAB_00aa5208:
        local_4b8 = uVar99 | (ulong)uVar92 << 0x20;
        local_3b8 = (undefined  [8])local_12e0;
        local_3b0[0] = 0x11;
        if (uVar14 != 0) {
          local_3b0[0] = 0x1d;
        }
        local_3a8 = 1;
        local_3a4[0] = 0;
        local_3b0[1] = iVar75;
        FUN_00aa6efc(&local_9d0,uVar88,local_3b8,&local_4b8);
        if ((uint)uVar99 < 2) {
          iVar75 = -2;
          if ((uint)uVar99 != 0) {
            iVar75 = -1;
          }
          if (0 < (int)uVar88) {
            uVar85 = iVar75 + uVar92 * 2;
            iVar75 = *(int *)(&UNK_00522dd8 + (long)(int)uVar85 * 4);
            uVar99 = (ulong)uVar88;
            piVar83 = (int *)((ulong)&local_9d0 | 4);
            puVar80 = (uint *)local_3b8;
            do {
              uVar88 = piVar83[-1];
              if (uVar85 < 2) {
                uVar92 = 0;
              }
              else if (uVar85 - 2 < 9) {
                uVar97 = uVar88 >> 1 & 1;
                uVar93 = uVar88 >> 2 & 1;
                uVar86 = uVar88 >> 3 & 1;
                uVar81 = uVar88 >> 4 & 1;
                switch(uVar85) {
                case 2:
                  uVar92 = uVar97 * 0x116;
                  break;
                case 3:
                  uVar92 = uVar97 * 0x10c;
                  break;
                case 4:
                  uVar92 = uVar97 << 7 | uVar93 << 8 | uVar93 << 3 | uVar97 << 2 | uVar93 << 1 |
                           uVar97;
                  break;
                case 5:
                  uVar92 = uVar97 << 7 | uVar93 << 8 | uVar93 << 2 | uVar97 << 1 | uVar93;
                  break;
                case 6:
                  uVar92 = uVar93 << 7 | uVar86 << 8 | uVar97 << 6 | uVar86 << 2 | uVar93 << 1 |
                           uVar97;
                  break;
                case 7:
                  uVar92 = uVar93 << 7 | uVar86 << 8 | uVar97 << 6 | uVar86 << 1 | uVar93;
                  break;
                case 8:
                  uVar92 = uVar86 << 7 | uVar81 << 8 | uVar93 << 6 | uVar97 << 5 | uVar81 << 1 |
                           uVar86;
                  break;
                case 9:
                  uVar92 = uVar86 << 7 | uVar81 << 8 | uVar93 << 6 | uVar97 << 5 | uVar81;
                  break;
                case 10:
                  uVar92 = uVar88 >> 5 & 1;
                  uVar92 = uVar81 << 7 | uVar92 << 8 | uVar86 << 6 | uVar93 << 5 | uVar97 << 4 |
                           uVar92;
                }
              }
              else {
                uVar92 = 0xffffffff;
              }
              uVar99 = uVar99 - 1;
              *puVar80 = -(uVar88 & 1) & 0x80 |
                         (uVar92 + *piVar83 * iVar75 ^ -(uVar88 & 1) & 0x1ff) >> 2;
              piVar83 = piVar83 + 3;
              puVar80 = puVar80 + 1;
            } while (uVar99 != 0);
          }
        }
        else if (0 < (int)uVar88) {
          uVar99 = 0;
          do {
            uVar97 = 0;
            iVar75 = 8;
            uVar85 = uVar92 - 8;
            do {
              uVar93 = iVar75 - uVar92;
              iVar75 = iVar75 - uVar92;
              uVar81 = uVar85 & 0x1f;
              uVar85 = uVar85 + uVar92;
              uVar86 = local_9c8[uVar99 * 3] << (ulong)(uVar93 & 0x1f);
              if ((int)uVar93 < 0) {
                uVar86 = local_9c8[uVar99 * 3] >> (ulong)uVar81;
              }
              uVar97 = uVar86 | uVar97;
            } while (0 < iVar75);
            *(uint *)(local_3b8 + uVar99 * 4) = uVar97;
            uVar99 = uVar99 + 1;
          } while (uVar99 != uVar88);
        }
        lVar96 = 0;
        iVar75 = 0;
        puVar80 = local_4c8;
        do {
          uVar88 = *puVar80;
          if (0xf < uVar88) goto LAB_00aa54dc;
          puVar6 = auStack_548 + lVar96 + -8;
          lVar78 = (long)iVar75;
          lVar1 = lVar78 * 4;
          puVar3 = (uint *)(local_3b8 + lVar1);
          puVar7 = local_540 + lVar96;
          auVar134._4_12_ = in_q1._4_12_;
          switch(uVar88) {
          case 0:
            uVar85 = *puVar3;
            uVar8 = *(undefined4 *)(local_3b8 + lVar1 + 4);
            *(uint *)(auStack_548 + lVar96 + -8) = uVar85;
            *(uint *)(auStack_548 + lVar96 + -4) = uVar85;
            *(uint *)(auStack_548 + lVar96) = uVar85;
            *(undefined4 *)(auStack_548 + lVar96 + 4) = 0xff;
            *(undefined4 *)(local_540 + lVar96) = uVar8;
            *(undefined4 *)(local_540 + lVar96 + 4) = uVar8;
            *(undefined4 *)((long)&local_538 + lVar96) = uVar8;
            *(undefined4 *)((long)&local_538 + lVar96 + 4) = 0xff;
            break;
          case 1:
            uVar92 = *(uint *)(local_3b8 + lVar1 + 4) & 0xc0 | *puVar3 >> 2;
            uVar85 = uVar92 + (*(uint *)(local_3b8 + lVar1 + 4) & 0x3f);
            if (0xfe < uVar85) {
              uVar85 = 0xff;
            }
            *(uint *)(auStack_548 + lVar96 + -8) = uVar92;
            *(uint *)(auStack_548 + lVar96 + -4) = uVar92;
            *(uint *)(auStack_548 + lVar96) = uVar92;
            *(undefined4 *)(auStack_548 + lVar96 + 4) = 0xff;
            *(uint *)(local_540 + lVar96) = uVar85;
            *(uint *)(local_540 + lVar96 + 4) = uVar85;
            *(uint *)((long)&local_538 + lVar96) = uVar85;
            *(undefined4 *)((long)&local_538 + lVar96 + 4) = 0xff;
            break;
          case 2:
            uVar92 = *puVar3;
            uVar97 = *(uint *)(local_3b8 + lVar1 + 4);
            uVar85 = uVar97 << 4 | 8;
            if (uVar92 <= uVar97) {
              uVar85 = uVar92 * 0x10;
            }
            iVar84 = uVar92 * 0x10 - 8;
            if (uVar92 <= uVar97) {
              iVar84 = uVar97 << 4;
            }
            *(uint *)(auStack_548 + lVar96 + -8) = uVar85;
            *(uint *)(auStack_548 + lVar96 + -4) = uVar85;
            *(uint *)(auStack_548 + lVar96) = uVar85;
            *(undefined4 *)(auStack_548 + lVar96 + 4) = 0x780;
            *(int *)(local_540 + lVar96) = iVar84;
            *(int *)(local_540 + lVar96 + 4) = iVar84;
            *(int *)((long)&local_538 + lVar96) = iVar84;
            *(undefined4 *)((long)&local_538 + lVar96 + 4) = 0x780;
            break;
          case 3:
            bVar68 = (*puVar3 & 0x80) != 0;
            uVar85 = 1;
            if (bVar68) {
              uVar85 = 2;
            }
            uVar92 = 0xfe;
            if (bVar68) {
              uVar92 = 0x1fc;
            }
            uVar97 = 0xf00;
            if (bVar68) {
              uVar97 = 0xe00;
            }
            uVar93 = 0x1e;
            if (bVar68) {
              uVar93 = 0x7c;
            }
            uVar92 = *puVar3 << (ulong)uVar85 & uVar92 |
                     uVar97 & *(int *)(local_3b8 + lVar1 + 4) << 4;
            uVar85 = uVar92 + (*(int *)(local_3b8 + lVar1 + 4) << (ulong)uVar85 & uVar93);
            *(uint *)(auStack_548 + lVar96 + -8) = uVar92;
            *(uint *)(auStack_548 + lVar96 + -4) = uVar92;
            if (0xffe < uVar85) {
              uVar85 = 0xfff;
            }
            *(uint *)(auStack_548 + lVar96) = uVar92;
            *(uint *)(local_540 + lVar96 + 4) = uVar85;
            *(uint *)((long)&local_538 + lVar96) = uVar85;
            *(undefined4 *)(auStack_548 + lVar96 + 4) = 0x780;
            *(uint *)(local_540 + lVar96) = uVar85;
            *(undefined4 *)((long)&local_538 + lVar96 + 4) = 0x780;
            break;
          case 4:
            uVar85 = *puVar3;
            uVar8 = *(undefined4 *)(&local_3a8 + lVar1 + -4);
            uVar110 = (undefined4)*(undefined8 *)(local_3b8 + lVar1 + 4);
            auVar134._0_4_ = uVar110;
            uVar111 = (undefined4)((ulong)*(undefined8 *)(local_3b8 + lVar1 + 4) >> 0x20);
            auVar172._12_4_ = in_q1._12_4_;
            auVar172._0_8_ = auVar134._0_8_;
            auVar172._8_4_ = uVar111;
            auVar167._8_8_ = auVar172._8_8_;
            auVar167._4_4_ = uVar110;
            auVar167._0_4_ = uVar110;
            in_q1._0_12_ = auVar167._0_12_;
            in_q1._12_4_ = uVar111;
            auVar158._4_4_ = uVar110;
            auVar158._0_4_ = uVar110;
            auVar158._8_4_ = uVar110;
            auVar158._12_4_ = uVar110;
            *(uint *)(auStack_548 + lVar96 + -8) = uVar85;
            *(uint *)(auStack_548 + lVar96 + -4) = uVar85;
            *(uint *)(auStack_548 + lVar96) = uVar85;
            *(undefined4 *)((long)&local_538 + lVar96 + 4) = uVar8;
            auVar124 = NEON_ext(in_q1,auVar158,0xc,1);
            *(long *)(local_540 + lVar96 + 4) = auVar124._8_8_;
            *(long *)(auStack_548 + lVar96 + 4) = auVar124._0_8_;
            break;
          case 5:
            uVar93 = *(uint *)(local_3b8 + lVar1 + 4);
            uVar86 = *(uint *)(&local_3a8 + lVar1 + -4);
            uVar85 = uVar93 & 0x80 | (int)*puVar3 >> 1;
            uVar92 = uVar86 & 0x80 | (int)local_3b0[lVar78] >> 1;
            uVar97 = uVar85;
            if (0xfe < (int)uVar85) {
              uVar97 = 0xff;
            }
            uVar85 = (-(uVar93 >> 6 & 1) & 0xffffffc0 | uVar93 >> 1 & 0x3f) + uVar85;
            uVar93 = uVar92;
            if (0xfe < (int)uVar92) {
              uVar93 = 0xff;
            }
            uVar92 = (-(uVar86 >> 6 & 1) & 0xffffffc0 | uVar86 >> 1 & 0x3f) + uVar92;
            if (0xfe < (int)uVar85) {
              uVar85 = 0xff;
            }
            if (0xfe < (int)uVar92) {
              uVar92 = 0xff;
            }
            uVar97 = uVar97 & ((int)uVar97 >> 0x1f ^ 0xffffffffU);
            uVar85 = uVar85 & ((int)uVar85 >> 0x1f ^ 0xffffffffU);
            *(ulong *)(auStack_548 + lVar96 + -8) = CONCAT44(uVar97,uVar97);
            *(ulong *)(auStack_548 + lVar96) =
                 CONCAT44(uVar93 & ((int)uVar93 >> 0x1f ^ 0xffffffffU),uVar97);
            *(ulong *)(local_540 + lVar96) = CONCAT44(uVar85,uVar85);
            *(ulong *)((long)&local_538 + lVar96) =
                 CONCAT44(uVar92 & ((int)uVar92 >> 0x1f ^ 0xffffffffU),uVar85);
            break;
          case 6:
            uVar85 = local_3b0[lVar78];
            iVar84 = *(int *)(&local_3a8 + lVar1 + -4);
            uVar92 = *puVar3;
            iVar131 = *(int *)(local_3b8 + lVar1 + 4);
            *(uint *)(local_540 + lVar96) = uVar92;
            *(int *)(local_540 + lVar96 + 4) = iVar131;
            *(uint *)(auStack_548 + lVar96 + -8) = iVar84 * uVar92 >> 8;
            *(uint *)(auStack_548 + lVar96 + -4) = (uint)(iVar131 * iVar84) >> 8;
            *(uint *)(auStack_548 + lVar96) = uVar85 * iVar84 >> 8;
            *(undefined4 *)(auStack_548 + lVar96 + 4) = 0xff;
            *(uint *)((long)&local_538 + lVar96) = uVar85;
            *(undefined4 *)((long)&local_538 + lVar96 + 4) = 0xff;
            break;
          case 7:
            uVar93 = *(uint *)(local_3b8 + lVar1 + 4);
            uVar86 = local_3b0[lVar78];
            uVar81 = *(uint *)(&local_3a8 + lVar1 + -4);
            uVar76 = *puVar3 >> 6 & 3;
            uVar85 = *puVar3 & 0x3f;
            uVar92 = uVar86 >> 6 & 2 | uVar93 >> 7 & 1;
            uVar97 = 0;
            if (uVar76 != 3) {
              uVar97 = uVar76;
            }
            uVar98 = 4;
            if (uVar76 == 3) {
              uVar98 = 5;
            }
            uVar94 = uVar93 & 0x1f;
            if (uVar92 != 3) {
              uVar98 = uVar76;
              uVar97 = uVar92;
            }
            uVar92 = uVar86 & 0x1f;
            uVar76 = uVar81 & 0x1f;
            if (5 < uVar98) goto LAB_00aa5dc4;
            uVar15 = uVar93 >> 6 & 1;
            uVar16 = uVar93 >> 5 & 1;
            uVar17 = uVar86 >> 6 & 1;
            uVar18 = uVar86 >> 5 & 1;
            uVar19 = uVar81 >> 7 & 1;
            uVar20 = uVar81 >> 6 & 1;
            uVar21 = uVar81 >> 5 & 1;
            switch(uVar98) {
            case 0:
              uVar85 = uVar15 << 9 | uVar16 << 8 | uVar85 | uVar17 << 7 | uVar18 << 10;
              break;
            case 1:
              uVar94 = uVar93 & 0x3f;
              uVar92 = uVar86 & 0x3f;
              uVar85 = uVar20 << 10 | uVar15 << 8 | uVar17 << 7 | uVar85 | uVar19 << 6 | uVar21 << 9
              ;
              goto LAB_00aa5dc4;
            case 2:
              uVar76 = uVar19 << 7 | uVar76 | uVar20 << 6;
              uVar85 = uVar15 << 9 | uVar16 << 8 | uVar17 << 7 | uVar85 | uVar18 << 6;
              goto LAB_00aa5dbc;
            case 3:
              uVar94 = uVar93 & 0x3f;
              uVar85 = uVar15 << 8 | uVar85 | uVar17 << 7;
              uVar92 = uVar86 & 0x3f;
              break;
            case 4:
              uVar94 = uVar15 << 6 | uVar94 | uVar16 << 5;
              uVar92 = uVar17 << 6 | uVar92 | uVar18 << 5;
              uVar85 = uVar85 | uVar19 << 6 | uVar20 << 7;
              uVar76 = uVar81 & 0x3f;
              goto LAB_00aa5dc4;
            case 5:
              uVar94 = uVar15 << 6 | uVar94 | uVar16 << 5;
              uVar92 = uVar17 << 6 | uVar92 | uVar18 << 5;
            }
            uVar76 = uVar76 | uVar20 << 6;
            uVar85 = uVar85 & 0xffffff80 | uVar85 & 0x3f | uVar19 << 6;
LAB_00aa5dbc:
            uVar76 = uVar76 & 0xffffffc0 | uVar76 & 0x1f | uVar21 << 5;
LAB_00aa5dc4:
            uVar93 = *(uint *)(&DAT_00522e04 + (ulong)uVar98 * 4);
            uVar85 = uVar85 << (ulong)(uVar93 & 0x1f);
            uVar94 = uVar94 << (ulong)(uVar93 & 0x1f);
            uVar92 = uVar92 << (ulong)(uVar93 & 0x1f);
            if (uVar98 != 5) {
              uVar92 = uVar85 - uVar92;
              uVar94 = uVar85 - uVar94;
            }
            uVar86 = uVar92;
            uVar81 = uVar85;
            if ((uVar97 != 2) && (uVar86 = uVar85, uVar81 = uVar92, uVar97 == 1)) {
              uVar86 = uVar94;
              uVar94 = uVar85;
            }
            iVar84 = uVar76 << (ulong)(uVar93 & 0x1f);
            uVar85 = uVar86 - iVar84;
            uVar92 = uVar94 - iVar84;
            uVar97 = uVar81 - iVar84;
            if (0xffe < (int)uVar85) {
              uVar85 = 0xfff;
            }
            if (0xffe < (int)uVar92) {
              uVar92 = 0xfff;
            }
            if (0xffe < (int)uVar97) {
              uVar97 = 0xfff;
            }
            if (0xffe < (int)uVar86) {
              uVar86 = 0xfff;
            }
            if (0xffe < (int)uVar94) {
              uVar94 = 0xfff;
            }
            *(uint *)(auStack_548 + lVar96 + -8) = uVar85 & ((int)uVar85 >> 0x1f ^ 0xffffffffU);
            *(uint *)(auStack_548 + lVar96 + -4) = uVar92 & ((int)uVar92 >> 0x1f ^ 0xffffffffU);
            if (0xffe < (int)uVar81) {
              uVar81 = 0xfff;
            }
            *(uint *)(auStack_548 + lVar96) = uVar97 & ((int)uVar97 >> 0x1f ^ 0xffffffffU);
            *(undefined4 *)(auStack_548 + lVar96 + 4) = 0x780;
            *(uint *)(local_540 + lVar96) = uVar86 & ((int)uVar86 >> 0x1f ^ 0xffffffffU);
            *(uint *)(local_540 + lVar96 + 4) = uVar94 & ((int)uVar94 >> 0x1f ^ 0xffffffffU);
            *(uint *)((long)&local_538 + lVar96) = uVar81 & ((int)uVar81 >> 0x1f ^ 0xffffffffU);
            *(undefined4 *)((long)&local_538 + lVar96 + 4) = 0x780;
            break;
          case 8:
            uVar85 = local_3b0[lVar78];
            iVar130 = *(int *)(&local_3a8 + lVar1 + -4);
            iVar136 = *(int *)(&local_3a8 + lVar1);
            uVar97 = local_3a4[lVar78];
            uVar92 = *puVar3;
            iVar5 = *(int *)(local_3b8 + lVar1 + 4);
            iVar84 = uVar97 + iVar130;
            iVar131 = iVar136 + uVar85;
            if ((uint)(iVar84 + iVar5) < iVar131 + uVar92) {
              uVar85 = iVar84 >> 1 & (iVar84 >> 0x1f ^ 0xffffffffU);
              uVar93 = iVar131 >> 1 & (iVar131 >> 0x1f ^ 0xffffffffU);
              uVar114 = NEON_smax(CONCAT44(uVar97,(int)(uVar97 + iVar5) >> 1),0,4);
              uVar122 = NEON_smax(CONCAT44(iVar136,(int)(iVar136 + uVar92) >> 1),0,4);
              auVar143._0_4_ = (undefined4)uVar114;
              auVar143[4] = (char)uVar85;
              auVar143[5] = (char)(uVar85 >> 8);
              auVar143[6] = (char)(uVar85 >> 0x10);
              auVar143[7] = (char)(uVar85 >> 0x18);
              auVar143[8] = (undefined)((ulong)uVar114 >> 0x20);
              auVar143[9] = (undefined)((ulong)uVar114 >> 0x28);
              auVar143[10] = (undefined)((ulong)uVar114 >> 0x30);
              auVar143[11] = (char)((ulong)uVar114 >> 0x38);
              auVar143[12] = 0xff;
              auVar143._13_3_ = 0;
              in_q1._0_4_ = (undefined4)uVar122;
              in_q1[4] = (char)uVar93;
              in_q1[5] = (char)(uVar93 >> 8);
              in_q1[6] = (char)(uVar93 >> 0x10);
              in_q1[7] = (char)(uVar93 >> 0x18);
              in_q1[8] = (undefined)((ulong)uVar122 >> 0x20);
              in_q1[9] = (undefined)((ulong)uVar122 >> 0x28);
              in_q1[10] = (undefined)((ulong)uVar122 >> 0x30);
              in_q1[11] = (char)((ulong)uVar122 >> 0x38);
              in_q1[12] = 0xff;
              in_q1._13_3_ = 0;
LAB_00aa5d2c:
              *(long *)(auStack_548 + lVar96) = auVar143._8_8_;
              *(long *)(auStack_548 + lVar96 + -8) = auVar143._0_8_;
              *(long *)((long)&local_538 + lVar96) = in_q1._8_8_;
              *(long *)(local_540 + lVar96) = in_q1._0_8_;
            }
            else {
              *(int *)(auStack_548 + lVar96) = iVar136;
              *(uint *)(auStack_548 + lVar96 + -8) = uVar92;
              *(uint *)(auStack_548 + lVar96 + -4) = uVar85;
              *(int *)(local_540 + lVar96 + 4) = iVar130;
              *(uint *)((long)&local_538 + lVar96) = uVar97;
              *(undefined4 *)(auStack_548 + lVar96 + 4) = 0xff;
              *(int *)(local_540 + lVar96) = iVar5;
              *(undefined4 *)((long)&local_538 + lVar96 + 4) = 0xff;
            }
            break;
          case 9:
            uVar92 = *(uint *)(&local_3a8 + lVar1 + -4);
            uVar106 = CONCAT44(local_3a4[lVar78],*(uint *)(local_3b8 + lVar1 + 4));
            uVar89 = NEON_cmtst(uVar106,0x4000000040,4);
            uVar106 = uVar106 & 0x8000000080;
            uVar85 = -(uVar92 >> 6 & 1) & 0xffffffc0 | uVar92 >> 1 & 0x3f;
            uVar92 = uVar92 & 0x80 | (int)local_3b0[lVar78] >> 1;
            uVar99 = CONCAT44(local_3a4[lVar78] >> 1,*(uint *)(local_3b8 + lVar1 + 4) >> 1) &
                     0x3f0000003f;
            uVar89 = uVar89 & 0xffffffc0ffffffc0;
            iVar84 = CONCAT13((char)(uVar89 >> 0x18),
                              CONCAT12((char)(uVar89 >> 0x10),
                                       CONCAT11((char)(uVar89 >> 8),(byte)uVar89 | (byte)uVar99)));
            iVar131 = (int)*puVar3 >> 1;
            iVar136 = *(int *)(&local_3a8 + lVar1) >> 1;
            iVar130 = (int)(CONCAT17((char)(uVar89 >> 0x38),
                                     CONCAT16((char)(uVar89 >> 0x30),
                                              CONCAT15((char)(uVar89 >> 0x28),
                                                       CONCAT14((byte)(uVar89 >> 0x20) |
                                                                (byte)(uVar99 >> 0x20),iVar84)))) >>
                           0x20);
            iVar131 = CONCAT13((char)((int)*puVar3 >> 0x19),
                               CONCAT12((char)((uint)iVar131 >> 0x10),
                                        CONCAT11((char)((uint)iVar131 >> 8),
                                                 (byte)uVar106 | (byte)iVar131)));
            uVar114 = CONCAT17((char)(*(int *)(&local_3a8 + lVar1) >> 0x19),
                               CONCAT16((char)((uint)iVar136 >> 0x10),
                                        CONCAT15((char)((uint)iVar136 >> 8),
                                                 CONCAT14((byte)(uVar106 >> 0x20) | (byte)iVar136,
                                                          iVar131))));
            iVar136 = (int)((ulong)uVar114 >> 0x20);
            if (-1 < (int)(uVar85 + iVar84 + iVar130)) {
              uVar114 = NEON_smin(uVar114,0xff000000ff,4);
              uVar85 = uVar85 + uVar92;
              if (0xfe < (int)uVar92) {
                uVar92 = 0xff;
              }
              uVar122 = NEON_smin(CONCAT44(iVar130 + iVar136,iVar84 + iVar131),0xff000000ff,4);
              if (0xfe < (int)uVar85) {
                uVar85 = 0xff;
              }
              uVar92 = uVar92 & ((int)uVar92 >> 0x1f ^ 0xffffffffU);
              uVar114 = NEON_smax(uVar114,0,4);
              uVar85 = uVar85 & ((int)uVar85 >> 0x1f ^ 0xffffffffU);
              uVar122 = NEON_smax(uVar122,0,4);
              auVar143._0_4_ = (undefined4)uVar114;
              auVar143[4] = (char)uVar92;
              auVar143[5] = (char)(uVar92 >> 8);
              auVar143[6] = (char)(uVar92 >> 0x10);
              auVar143[7] = (char)(uVar92 >> 0x18);
              auVar143[8] = (undefined)((ulong)uVar114 >> 0x20);
              auVar143[9] = (undefined)((ulong)uVar114 >> 0x28);
              auVar143[10] = (undefined)((ulong)uVar114 >> 0x30);
              auVar143[11] = (char)((ulong)uVar114 >> 0x38);
              auVar143[12] = 0xff;
              auVar143._13_3_ = 0;
              in_q1._0_4_ = (undefined4)uVar122;
              in_q1[4] = (char)uVar85;
              in_q1[5] = (char)(uVar85 >> 8);
              in_q1[6] = (char)(uVar85 >> 0x10);
              in_q1[7] = (char)(uVar85 >> 0x18);
              in_q1[8] = (undefined)((ulong)uVar122 >> 0x20);
              in_q1[9] = (undefined)((ulong)uVar122 >> 0x28);
              in_q1[10] = (undefined)((ulong)uVar122 >> 0x30);
              in_q1[11] = (char)((ulong)uVar122 >> 0x38);
              in_q1[12] = 0xff;
              in_q1._13_3_ = 0;
              goto LAB_00aa5d2c;
            }
            iVar130 = iVar130 + iVar136;
            uVar97 = (int)(iVar136 + uVar92) >> 1;
            uVar85 = (int)(uVar85 + uVar92 + iVar130) >> 1;
            if (0xfe < (int)uVar85) {
              uVar85 = 0xff;
            }
            if (0xfe < (int)uVar97) {
              uVar97 = 0xff;
            }
            uVar85 = uVar85 & ((int)uVar85 >> 0x1f ^ 0xffffffffU);
            uVar114 = NEON_smin(CONCAT44(iVar136,iVar136 + iVar131 >> 1),0xff000000ff,4);
            uVar97 = uVar97 & ((int)uVar97 >> 0x1f ^ 0xffffffffU);
            uVar113 = NEON_smin(CONCAT44(iVar130,iVar84 + iVar131 + iVar130 >> 1),0xff000000ff,4);
            uVar122 = NEON_smax(uVar114,0,4);
            uVar113 = NEON_smax(uVar113,0,4);
            uVar114 = CONCAT17((char)(uVar97 >> 0x18),
                               CONCAT16((char)(uVar97 >> 0x10),
                                        CONCAT15((char)(uVar97 >> 8),
                                                 CONCAT14((char)uVar97,(int)uVar122))));
            auVar115[8] = (undefined)((ulong)uVar122 >> 0x20);
            auVar115._0_8_ = uVar114;
            auVar115[9] = (undefined)((ulong)uVar122 >> 0x28);
            auVar115[10] = (undefined)((ulong)uVar122 >> 0x30);
            auVar115[11] = (char)((ulong)uVar122 >> 0x38);
            auVar115[12] = 0xff;
            uVar122 = CONCAT17((char)(uVar85 >> 0x18),
                               CONCAT16((char)(uVar85 >> 0x10),
                                        CONCAT15((char)(uVar85 >> 8),
                                                 CONCAT14((char)uVar85,(int)uVar113))));
            auVar123[8] = (undefined)((ulong)uVar113 >> 0x20);
            auVar123._0_8_ = uVar122;
            auVar123[9] = (undefined)((ulong)uVar113 >> 0x28);
            auVar123[10] = (undefined)((ulong)uVar113 >> 0x30);
            auVar123[11] = (char)((ulong)uVar113 >> 0x38);
            auVar123[12] = 0xff;
            in_q1._13_3_ = 0;
            in_q1._0_13_ = auVar123;
            *(ulong *)(auStack_548 + lVar96) = (ulong)auVar123._8_5_;
            *(undefined8 *)(auStack_548 + lVar96 + -8) = uVar122;
            *(ulong *)((long)&local_538 + lVar96) = (ulong)auVar115._8_5_;
            *(undefined8 *)(local_540 + lVar96) = uVar114;
            break;
          case 10:
            uVar85 = local_3b0[lVar78];
            iVar84 = *(int *)(&local_3a8 + lVar1 + -4);
            uVar92 = *puVar3;
            iVar131 = *(int *)(local_3b8 + lVar1 + 4);
            *(uint *)(local_540 + lVar96) = uVar92;
            *(int *)(local_540 + lVar96 + 4) = iVar131;
            *(uint *)(auStack_548 + lVar96 + -8) = iVar84 * uVar92 >> 8;
            *(uint *)(auStack_548 + lVar96 + -4) = (uint)(iVar131 * iVar84) >> 8;
            uVar8 = *(undefined4 *)(&local_3a8 + lVar1);
            uVar92 = local_3a4[lVar78];
            *(uint *)(auStack_548 + lVar96) = uVar85 * iVar84 >> 8;
            *(undefined4 *)(auStack_548 + lVar96 + 4) = uVar8;
            *(uint *)((long)&local_538 + lVar96) = uVar85;
            *(uint *)((long)&local_538 + lVar96 + 4) = uVar92;
            break;
          case 0xb:
            FUN_00aa7740(puVar6,puVar7,*puVar3,*(undefined4 *)(local_3b8 + lVar1 + 4),
                         local_3b0[lVar78],*(undefined4 *)(&local_3a8 + lVar1 + -4),
                         *(undefined4 *)(&local_3a8 + lVar1),local_3a4[lVar78]);
            break;
          case 0xc:
            uVar85 = local_3b0[lVar78];
            iVar130 = *(int *)(&local_3a8 + lVar1 + -4);
            iVar136 = *(int *)(&local_3a8 + lVar1);
            uVar97 = local_3a4[lVar78];
            uVar92 = *puVar3;
            iVar5 = *(int *)(local_3b8 + lVar1 + 4);
            iVar84 = uVar97 + iVar130;
            iVar131 = iVar136 + uVar85;
            if ((uint)(iVar84 + iVar5) < iVar131 + uVar92) {
              uVar114 = NEON_smin(CONCAT44(local_3a4[lVar78 + 2],iVar84 >> 1),0xff000000ff,4);
              uVar122 = NEON_smin(CONCAT44(local_3a4[lVar78 + 1],iVar131 >> 1),0xff000000ff,4);
              uVar113 = NEON_smin(CONCAT44(uVar97,(int)(uVar97 + iVar5) >> 1),0xff000000ff,4);
              uVar138 = NEON_smin(CONCAT44(iVar136,(int)(iVar136 + uVar92) >> 1),0xff000000ff,4);
              uVar114 = NEON_smax(uVar114,0,4);
              uVar113 = NEON_smax(uVar113,0,4);
              uVar122 = NEON_smax(uVar122,0,4);
              uVar138 = NEON_smax(uVar138,0,4);
              auVar143._0_4_ = (undefined4)uVar113;
              auVar143[4] = (undefined)uVar114;
              auVar143[5] = (undefined)((ulong)uVar114 >> 8);
              auVar143[6] = (undefined)((ulong)uVar114 >> 0x10);
              auVar143[7] = (undefined)((ulong)uVar114 >> 0x18);
              auVar143[8] = (char)((ulong)uVar113 >> 0x20);
              auVar143[9] = (char)((ulong)uVar113 >> 0x28);
              auVar143[10] = (char)((ulong)uVar113 >> 0x30);
              auVar143[11] = (char)((ulong)uVar113 >> 0x38);
              auVar143[12] = (undefined)((ulong)uVar114 >> 0x20);
              auVar143[13] = (undefined)((ulong)uVar114 >> 0x28);
              auVar143[14] = (undefined)((ulong)uVar114 >> 0x30);
              auVar143[15] = (undefined)((ulong)uVar114 >> 0x38);
              in_q1._0_4_ = (undefined4)uVar138;
              in_q1[4] = (undefined)uVar122;
              in_q1[5] = (undefined)((ulong)uVar122 >> 8);
              in_q1[6] = (undefined)((ulong)uVar122 >> 0x10);
              in_q1[7] = (undefined)((ulong)uVar122 >> 0x18);
              in_q1[8] = (char)((ulong)uVar138 >> 0x20);
              in_q1[9] = (char)((ulong)uVar138 >> 0x28);
              in_q1[10] = (char)((ulong)uVar138 >> 0x30);
              in_q1[11] = (char)((ulong)uVar138 >> 0x38);
              in_q1[12] = (undefined)((ulong)uVar122 >> 0x20);
              in_q1[13] = (undefined)((ulong)uVar122 >> 0x28);
              in_q1[14] = (undefined)((ulong)uVar122 >> 0x30);
              in_q1[15] = (undefined)((ulong)uVar122 >> 0x38);
              goto LAB_00aa5d2c;
            }
            *(uint *)(auStack_548 + lVar96 + -8) = uVar92;
            *(uint *)(auStack_548 + lVar96 + -4) = uVar85;
            uVar85 = local_3a4[lVar78 + 1];
            uVar92 = local_3a4[lVar78 + 2];
            *(int *)(local_540 + lVar96) = iVar5;
            *(int *)(local_540 + lVar96 + 4) = iVar130;
            *(int *)(auStack_548 + lVar96) = iVar136;
            *(uint *)(auStack_548 + lVar96 + 4) = uVar85;
            *(uint *)((long)&local_538 + lVar96) = uVar97;
            *(uint *)((long)&local_538 + lVar96 + 4) = uVar92;
            break;
          case 0xd:
            uVar85 = *(uint *)(local_3b8 + lVar1 + 4);
            uVar92 = *(uint *)(&local_3a8 + lVar1 + -4);
            uVar97 = -(uVar85 >> 6 & 1) & 0xffffffc0 | uVar85 >> 1 & 0x3f;
            uVar76 = local_3a4[lVar78];
            uVar86 = uVar85 & 0x80 | (int)*puVar3 >> 1;
            uVar81 = uVar92 & 0x80 | (int)local_3b0[lVar78] >> 1;
            uVar98 = local_3a4[lVar78 + 2];
            uVar93 = -(uVar92 >> 6 & 1) & 0xffffffc0 | uVar92 >> 1 & 0x3f;
            uVar85 = -(uVar76 >> 6 & 1) & 0xffffffc0 | uVar76 >> 1 & 0x3f;
            uVar76 = uVar76 & 0x80 | *(int *)(&local_3a8 + lVar1) >> 1;
            uVar94 = uVar98 & 0x80 | (int)local_3a4[lVar78 + 1] >> 1;
            uVar92 = -(uVar98 >> 6 & 1) & 0xffffffc0 | uVar98 >> 1 & 0x3f;
            if ((int)(uVar93 + uVar97 + uVar85) < 0) {
              iVar84 = uVar85 + uVar76;
              uVar114 = NEON_smin(CONCAT44(uVar92 + uVar94,(int)(uVar93 + uVar81 + iVar84) >> 1),
                                  0xff000000ff,4);
              uVar113 = NEON_smin(CONCAT44(uVar76,(int)(uVar76 + uVar86) >> 1),0xff000000ff,4);
              uVar138 = NEON_smin(CONCAT44(iVar84,(int)(uVar97 + uVar86 + iVar84) >> 1),0xff000000ff
                                  ,4);
              uVar122 = NEON_smin(CONCAT44(uVar94,(int)(uVar76 + uVar81) >> 1),0xff000000ff,4);
              uVar114 = NEON_smax(uVar114,0,4);
              uVar113 = NEON_smax(uVar113,0,4);
              uVar138 = NEON_smax(uVar138,0,4);
              uVar122 = NEON_smax(uVar122,0,4);
              auVar143._0_4_ = (undefined4)uVar138;
              auVar143[4] = (undefined)uVar114;
              auVar143[5] = (undefined)((ulong)uVar114 >> 8);
              auVar143[6] = (undefined)((ulong)uVar114 >> 0x10);
              auVar143[7] = (undefined)((ulong)uVar114 >> 0x18);
              auVar143[8] = (char)((ulong)uVar138 >> 0x20);
              auVar143[9] = (char)((ulong)uVar138 >> 0x28);
              auVar143[10] = (char)((ulong)uVar138 >> 0x30);
              auVar143[11] = (char)((ulong)uVar138 >> 0x38);
              auVar143[12] = (undefined)((ulong)uVar114 >> 0x20);
              auVar143[13] = (undefined)((ulong)uVar114 >> 0x28);
              auVar143[14] = (undefined)((ulong)uVar114 >> 0x30);
              auVar143[15] = (undefined)((ulong)uVar114 >> 0x38);
              in_q1._0_4_ = (undefined4)uVar113;
              in_q1[4] = (undefined)uVar122;
              in_q1[5] = (undefined)((ulong)uVar122 >> 8);
              in_q1[6] = (undefined)((ulong)uVar122 >> 0x10);
              in_q1[7] = (undefined)((ulong)uVar122 >> 0x18);
              in_q1[8] = (char)((ulong)uVar113 >> 0x20);
              in_q1[9] = (char)((ulong)uVar113 >> 0x28);
              in_q1[10] = (char)((ulong)uVar113 >> 0x30);
              in_q1[11] = (char)((ulong)uVar113 >> 0x38);
              in_q1[12] = (undefined)((ulong)uVar122 >> 0x20);
              in_q1[13] = (undefined)((ulong)uVar122 >> 0x28);
              in_q1[14] = (undefined)((ulong)uVar122 >> 0x30);
              in_q1[15] = (undefined)((ulong)uVar122 >> 0x38);
              goto LAB_00aa5d2c;
            }
            iVar84 = uVar97 + uVar86;
            iVar131 = uVar93 + uVar81;
            uVar85 = uVar85 + uVar76;
            if (0xfe < (int)uVar86) {
              uVar86 = 0xff;
            }
            if (0xfe < (int)uVar81) {
              uVar81 = 0xff;
            }
            uVar114 = NEON_smin(CONCAT44(iVar84,uVar76),0xff000000ff,4);
            uVar92 = uVar92 + uVar94;
            uVar122 = NEON_smin(CONCAT44(iVar131,uVar94),0xff000000ff,4);
            if (0xfe < (int)uVar85) {
              uVar85 = 0xff;
            }
            if (0xfe < (int)uVar92) {
              uVar92 = 0xff;
            }
            uVar113 = NEON_smax(uVar114,0,4);
            uVar122 = NEON_smax(uVar122,0,4);
            in_q1._0_8_ = (long)(int)uVar122 << 0x20;
            in_q1._8_8_ = (long)(int)((ulong)uVar122 >> 0x20) << 0x20;
            *(ulong *)(auStack_548 + lVar96 + -8) =
                 CONCAT44(uVar81 & ((int)uVar81 >> 0x1f ^ 0xffffffffU),
                          uVar86 & ((int)uVar86 >> 0x1f ^ 0xffffffffU));
            *(ulong *)((long)&local_538 + lVar96) =
                 CONCAT44(uVar92 & ((int)uVar92 >> 0x1f ^ 0xffffffffU),
                          uVar85 & ((int)uVar85 >> 0x1f ^ 0xffffffffU));
            uVar114 = CONCAT17((char)((ulong)uVar122 >> 0x18),
                               CONCAT16((char)((ulong)uVar122 >> 0x10),
                                        CONCAT15((char)((ulong)uVar122 >> 8),
                                                 CONCAT14((char)uVar122,(int)uVar113))));
            auVar154[8] = (undefined)((ulong)uVar113 >> 0x20);
            auVar154._0_8_ = uVar114;
            auVar154[9] = (undefined)((ulong)uVar113 >> 0x28);
            auVar154[10] = (undefined)((ulong)uVar113 >> 0x30);
            auVar154[11] = (char)((ulong)uVar113 >> 0x38);
            auVar154[12] = (char)((ulong)uVar122 >> 0x20);
            auVar154[13] = (char)((ulong)uVar122 >> 0x28);
            auVar154[14] = (char)((ulong)uVar122 >> 0x30);
            auVar154[15] = (char)((ulong)uVar122 >> 0x38);
            *(long *)(local_540 + lVar96) = auVar154._8_8_;
            *(undefined8 *)(auStack_548 + lVar96) = uVar114;
            break;
          case 0xe:
            FUN_00aa7740(puVar6,puVar7,*puVar3,*(undefined4 *)(local_3b8 + lVar1 + 4),
                         local_3b0[lVar78],*(undefined4 *)(&local_3a8 + lVar1 + -4),
                         *(undefined4 *)(&local_3a8 + lVar1),local_3a4[lVar78]);
            uVar85 = local_3a4[lVar78 + 2];
            *(uint *)(auStack_548 + lVar96 + 4) = local_3a4[lVar78 + 1];
            *(uint *)((long)&local_538 + lVar96 + 4) = uVar85;
            break;
          case 0xf:
            uVar97 = local_3a4[lVar78 + 1];
            uVar86 = local_3a4[lVar78 + 2];
            FUN_00aa7740(puVar6,puVar7,*puVar3,*(undefined4 *)(local_3b8 + lVar1 + 4),
                         local_3b0[lVar78],*(undefined4 *)(&local_3a8 + lVar1 + -4),
                         *(undefined4 *)(&local_3a8 + lVar1),local_3a4[lVar78]);
            uVar85 = uVar97 & 0x7f;
            uVar92 = uVar86 >> 6 & 2;
            uVar97 = uVar97 >> 7;
            uVar93 = uVar92 | uVar97 & 1;
            if (uVar93 == 3) {
              iVar84 = uVar85 << 5;
              uVar92 = (uVar86 & 0x7f) << 5;
            }
            else {
              uVar81 = 0x20 >> (ulong)(uVar92 | uVar97 & 1);
              uVar85 = (uVar86 & 0x7f) << (ulong)(uVar93 + 1) & 0x780 | uVar85;
              uVar92 = ((0x3fU >> (ulong)(uVar92 | uVar97 & 1) & uVar86 ^ uVar81) - uVar81) + uVar85
                       << (ulong)(4 - uVar93 & 0x1f);
              iVar84 = uVar85 << (ulong)(4 - uVar93 & 0x1f);
              if (0xffe < (int)uVar92) {
                uVar92 = 0xfff;
              }
              uVar92 = uVar92 & ((int)uVar92 >> 0x1f ^ 0xffffffffU);
            }
            *(int *)(auStack_548 + lVar96 + 4) = iVar84;
            *(uint *)((long)&local_538 + lVar96 + 4) = uVar92;
          }
LAB_00aa54dc:
          lVar96 = lVar96 + 0x20;
          puVar80 = puVar80 + 1;
          iVar75 = iVar75 + (uVar88 >> 1 & 0x7ffffffe) + 2;
        } while (uVar106 * 0x20 - lVar96 != 0);
        uVar88 = 1;
        if (uVar103 != 0) {
          uVar88 = 2;
        }
        uVar103 = uVar95 * uVar109 * uVar88;
        uVar106 = (ulong)uVar103;
        if (iVar71 == 2) {
          local_9c8[1] = uVar104 * uVar103;
        }
        else if (iVar71 == 1) {
          local_9c8[1] = (uVar103 * 7 + 2) / 3 + uVar104 * uVar103;
        }
        else if (iVar71 == 0) {
          local_9c8[1] = (uVar103 * 8 | 4) / 5 + uVar104 * uVar103;
        }
        else {
          local_9c8[1] = -1;
        }
        local_9d0 = local_12e0;
        local_9c0 = 0;
        local_9c8[0] = 0x7f;
        local_9bc = 0;
        FUN_00aa6efc(local_3b8,uVar106,&local_9d0,&local_12ec);
        if (bVar69) {
          uVar77 = uVar77 | uVar104 << 1;
          if (uVar104 == 0) {
            puVar7 = &UNK_00522e1c;
            if (uVar77 != 0) {
              puVar7 = &DAT_00522e28;
            }
            if (0 < (int)uVar103) {
              if (uVar103 == 1) {
                uVar89 = 0;
              }
              else {
                uVar89 = uVar106 & 0xfffffffe;
                puVar70 = (undefined4 *)((long)&local_4b8 + 4);
                puVar80 = local_3a4;
                uVar99 = uVar89;
                do {
                  uVar99 = uVar99 - 2;
                  uVar8 = *(undefined4 *)(puVar7 + (ulong)*puVar80 * 4);
                  puVar70[-1] = *(undefined4 *)(puVar7 + (ulong)puVar80[-3] * 4);
                  *puVar70 = uVar8;
                  puVar70 = puVar70 + 2;
                  puVar80 = puVar80 + 6;
                } while (uVar99 != 0);
                if (uVar89 == uVar106) goto LAB_00aa6254;
              }
              lVar96 = uVar106 - uVar89;
              puVar70 = (undefined4 *)((long)&local_4b8 + uVar89 * 4);
              puVar80 = local_3b0 + uVar89 * 3;
              do {
                lVar96 = lVar96 + -1;
                *puVar70 = *(undefined4 *)(puVar7 + (ulong)*puVar80 * 4);
                puVar70 = puVar70 + 1;
                puVar80 = puVar80 + 3;
              } while (lVar96 != 0);
              goto LAB_00aa6254;
            }
            goto LAB_00aa62d8;
          }
          if ((int)uVar103 < 1) goto LAB_00aa62d8;
          iVar75 = *(int *)(&DAT_00522e34 + (ulong)uVar77 * 4);
          puVar79 = &local_4b8;
          piVar83 = (int *)((ulong)local_3b8 | 4);
          uVar99 = uVar106;
          do {
            uVar85 = piVar83[-1];
            if (uVar104 == 1) {
              uVar92 = 0;
            }
            else {
              uVar92 = uVar85 >> 1 & 1;
              if (uVar77 == 6) {
                uVar97 = uVar85 >> 2 & 1;
                uVar92 = uVar92 << 5 | uVar97 << 6 | uVar97 << 1 | uVar92;
              }
              else if (uVar77 == 5) {
                uVar92 = (uVar92 | uVar92 << 5) << 1;
              }
              else if (uVar77 == 4) {
                uVar92 = uVar92 * 0x45;
              }
              else {
                uVar92 = 0xffffffff;
              }
            }
            uVar99 = uVar99 - 1;
            *(uint *)puVar79 =
                 -(uVar85 & 1) & 0x20 | (uVar92 + *piVar83 * iVar75 ^ -(uVar85 & 1) & 0x7f) >> 2;
            puVar79 = (undefined8 *)((long)puVar79 + 4);
            piVar83 = piVar83 + 3;
          } while (uVar99 != 0);
LAB_00aa6254:
          if ((int)uVar103 < 1) goto LAB_00aa62d8;
          if (uVar103 < 8) {
            uVar89 = 0;
LAB_00aa62ac:
            lVar96 = uVar106 - uVar89;
            puVar80 = (uint *)((long)&local_4b8 + uVar89 * 4);
            do {
              uVar77 = *puVar80;
              if (0x20 < uVar77) {
                uVar77 = uVar77 + 1;
              }
              lVar96 = lVar96 + -1;
              *puVar80 = uVar77;
              puVar80 = puVar80 + 1;
            } while (lVar96 != 0);
          }
          else {
            uVar89 = uVar106 & 0xfffffff8;
            auVar176._8_4_ = 0x20;
            auVar176._0_8_ = 0x2000000020;
            auVar176._12_4_ = 0x20;
            pauVar73 = (undefined (*) [16])auStack_4a8;
            uVar99 = uVar89;
            do {
              auVar124 = pauVar73[-1];
              auVar117 = *pauVar73;
              uVar99 = uVar99 - 8;
              auVar127 = NEON_cmhi(auVar124,auVar176,4);
              auVar134 = NEON_cmhi(auVar117,auVar176,4);
              auVar125._0_8_ =
                   CONCAT44(auVar124._4_4_ - auVar127._4_4_,auVar124._0_4_ - auVar127._0_4_);
              auVar125._8_4_ = auVar124._8_4_ - auVar127._8_4_;
              auVar125._12_4_ = auVar124._12_4_ - auVar127._12_4_;
              auVar132._0_8_ =
                   CONCAT44(auVar117._4_4_ - auVar134._4_4_,auVar117._0_4_ - auVar134._0_4_);
              auVar132._8_4_ = auVar117._8_4_ - auVar134._8_4_;
              auVar132._12_4_ = auVar117._12_4_ - auVar134._12_4_;
              *(long *)(pauVar73[-1] + 8) = auVar125._8_8_;
              *(undefined8 *)pauVar73[-1] = auVar125._0_8_;
              *(long *)(*pauVar73 + 8) = auVar132._8_8_;
              *(undefined8 *)*pauVar73 = auVar132._0_8_;
              pauVar73 = pauVar73 + 2;
            } while (uVar99 != 0);
            if (uVar89 != uVar106) goto LAB_00aa62ac;
          }
          if ((int)uVar103 < 0x40) goto LAB_00aa62d8;
        }
        else {
          if (0 < (int)uVar103) {
            uVar99 = 0;
            do {
              uVar85 = 0;
              iVar75 = 6;
              uVar77 = uVar104 - 6;
              do {
                uVar92 = iVar75 - uVar104;
                iVar75 = iVar75 - uVar104;
                uVar93 = uVar77 & 0x1f;
                uVar77 = uVar77 + uVar104;
                uVar97 = local_3b0[uVar99 * 3] << (ulong)(uVar92 & 0x1f);
                if ((int)uVar92 < 0) {
                  uVar97 = local_3b0[uVar99 * 3] >> (ulong)uVar93;
                }
                uVar85 = uVar97 | uVar85;
              } while (0 < iVar75);
              *(uint *)((long)&local_4b8 + uVar99 * 4) = uVar85;
              uVar99 = uVar99 + 1;
            } while (uVar99 != uVar106);
            goto LAB_00aa6254;
          }
LAB_00aa62d8:
          memset((void *)((long)&local_4b8 + (long)(int)uVar103 * 4),0xff,
                 (ulong)(0x3f - uVar103) * 4 + 4);
        }
        if (0 < param_5) {
          iVar75 = param_4;
          if (param_4 < 0) {
            iVar75 = param_4 + 1;
          }
          uVar106 = 0;
          iVar84 = 0;
          if (param_4 + -1 != 0) {
            iVar84 = ((iVar75 >> 1) + 0x400) / (param_4 + -1);
          }
          uVar103 = 0;
          if (param_5 - 1U != 0) {
            uVar103 = (((uint)param_5 >> 1) + 0x400) / (param_5 - 1U);
          }
          ppuVar101 = &local_9d0;
          do {
            if (0 < param_4) {
              uVar99 = 0;
              uVar77 = uVar103 * (uVar95 - 1) * (int)uVar106 + 0x20;
              uVar104 = uVar77 >> 6 & 0xf;
              ppuVar72 = ppuVar101;
              do {
                uVar85 = iVar84 * (uVar109 - 1) * (int)uVar99 + 0x20;
                iVar75 = 0;
                uVar92 = uVar85 >> 6 & 0xf;
                iVar71 = (uVar77 >> 10) * uVar109 + (uVar85 >> 10);
                iVar131 = iVar71 * uVar88;
                uVar85 = uVar92 * uVar104 + 8 >> 4;
                iVar71 = (iVar71 + uVar109) * uVar88;
                uVar89 = (ulong)uVar88;
                ppuVar108 = ppuVar72;
                do {
                  uVar97 = uVar88 + iVar131 + iVar75;
                  uVar93 = iVar131 + iVar75;
                  uVar86 = iVar71 + iVar75;
                  uVar81 = uVar88 + iVar71 + iVar75;
                  iVar75 = iVar75 + 1;
                  uVar89 = uVar89 - 1;
                  *(uint *)ppuVar108 =
                       *(int *)((long)&local_4b8 + (ulong)(uVar97 & 0x3f) * 4) * (uVar92 - uVar85) +
                       *(int *)((long)&local_4b8 + (ulong)(uVar93 & 0x3f) * 4) *
                       ((uVar85 - (uVar104 + uVar92)) + 0x10) +
                       *(int *)((long)&local_4b8 + (ulong)(uVar86 & 0x3f) * 4) * (uVar104 - uVar85)
                       + *(int *)((long)&local_4b8 + (ulong)(uVar81 & 0x3f) * 4) * uVar85 + 8 >> 4;
                  ppuVar108 = (ulong **)((long)ppuVar108 + 4);
                } while (uVar89 != 0);
                uVar99 = uVar99 + 1;
                ppuVar72 = ppuVar72 + 1;
              } while (uVar99 != uVar102);
            }
            uVar106 = uVar106 + 1;
            ppuVar101 = (ulong **)
                        ((long)ppuVar101 +
                        (-(ulong)((uint)param_4 >> 0x1f) & 0xfffffff800000000 | uVar102 << 3));
          } while (uVar106 != (uint)param_5);
        }
        puVar2 = (ulong *)local_3b8;
        if (bVar67) {
          uVar88 = 0xffffffff;
        }
        else {
          uVar103 = iVar91 - 2;
          uVar77 = iVar91 - 1;
          uVar88 = iVar91 + 0x3d;
          if (-1 < (int)uVar103) {
            uVar88 = uVar103;
          }
          uVar95 = iVar91 + 0x3e;
          if (-1 < (int)uVar77) {
            uVar95 = uVar77;
          }
          if ((int)uVar88 >> 6 == (int)uVar95 >> 6) {
            uVar88 = (uint)((local_12e0[(int)uVar88 >> 6] & (2L << ((ulong)uVar77 & 0x3f)) - 1U) >>
                           ((ulong)uVar103 & 0x3f));
          }
          else {
            uVar88 = (uint)((local_12e0[(int)uVar95 >> 6] &
                            (2L << ((ulong)uVar77 & 0x3f)) + 0xffffffffU) <<
                           ((ulong)(1 - uVar77) & 0x3f)) |
                     (uint)(local_12e0[(int)uVar88 >> 6] >> ((ulong)uVar103 & 0x3f));
          }
        }
        if ((local_4c8[0] - 2 < 0xe) && ((0x3223U >> (ulong)(local_4c8[0] - 2 & 0x1f) & 1) != 0)) {
          uVar102 = 0;
LAB_00aa65d8:
          bVar67 = true;
          *(undefined *)((ulong)local_3b8 | uVar102) = 1;
        }
        else {
          local_3b8 = (undefined  [8])((ulong)local_3b8 & 0xffffffffffffff00);
          if (uVar14 != 0) {
            if ((local_4c8[1] - 2 < 0xe) && ((0x3223U >> (ulong)(local_4c8[1] - 2 & 0x1f) & 1) != 0)
               ) {
              uVar102 = 1;
              goto LAB_00aa65d8;
            }
            local_3b8 = (undefined  [8])((ulong)puVar2 & 0xffffffffffff0000);
            if (uVar4 != 2) {
              if ((local_4c8[2] - 2 < 0xe) &&
                 ((0x3223U >> (ulong)(local_4c8[2] - 2 & 0x1f) & 1) != 0)) {
                uVar102 = 2;
                goto LAB_00aa65d8;
              }
              local_3b8 = (undefined  [8])((ulong)puVar2 & 0xffffffffff000000);
              if (uVar4 != 3) {
                if ((local_4c8[3] - 2 < 0xe) &&
                   ((0x3223U >> (ulong)(local_4c8[3] - 2 & 0x1f) & 1) != 0)) {
                  uVar102 = 3;
                  goto LAB_00aa65d8;
                }
                local_3b8 = (undefined  [8])((ulong)puVar2 & 0xffffffff00000000);
              }
            }
          }
          bVar69 = param_5 * param_4 < 0x1f;
          uVar103 = 0xfffffbff;
          if (uVar14 != 0) {
            uVar103 = (uint)local_12e0[0] >> 0xd | 0xfffffc00;
          }
          uVar103 = uVar103 + uVar4 * 0x400;
          uVar77 = 4;
          if ((uVar103 & 2) == 0) {
            uVar77 = 5;
          }
          uVar95 = 5;
          if (uVar4 == 3) {
            uVar95 = 6;
          }
          uVar104 = uVar77;
          if ((uVar103 & 1) != 0) {
            uVar104 = uVar95;
            uVar95 = uVar77;
          }
          if (param_5 < 1) {
            bVar67 = false;
          }
          else {
            uVar103 = (uVar103 ^ uVar103 >> 0xf) * -0x1121f76f;
            uVar106 = 0;
            uVar103 = (uVar103 ^ uVar103 >> 5) * 0x10001;
            bVar67 = false;
            iVar75 = 3;
            uVar103 = uVar103 ^ uVar103 >> 7;
            uVar74 = (ulong)&local_9d0 | (ulong)(uVar88 == 0) << 2;
            uVar103 = uVar103 ^ uVar103 >> 3;
            uVar103 = uVar103 ^ uVar103 << 6;
            uVar109 = uVar103 >> 0x18 & 0xf;
            uVar85 = uVar103 >> 0x14 & 0xf;
            uVar77 = uVar103 ^ uVar103 >> 0x11;
            uVar92 = uVar103 >> 0x10 & 0xf;
            uVar97 = uVar77 >> 4 & 0xf;
            uVar93 = uVar77 >> 0xc & 0xf;
            uVar86 = uVar77 >> 8 & 0xf;
            uVar89 = (ulong)&local_9d0 | (ulong)(uVar88 == 2) << 2;
            uVar90 = -(ulong)((uint)param_4 >> 0x1f) & 0xfffffff800000000 | uVar102 << 3;
            uVar105 = (ulong)&local_9d0 | (ulong)(uVar88 == 1) << 2;
            uVar99 = (ulong)&local_9d0 | (ulong)(uVar88 == 3) << 2;
            do {
              if (0 < param_4) {
                iVar91 = (int)uVar106 << bVar69;
                iVar84 = 0;
                lVar96 = 0;
                iVar71 = iVar75;
                do {
                  if (uVar14 == 0) {
LAB_00aa68c0:
                    lVar78 = 0;
                  }
                  else {
                    iVar131 = iVar84 << (ulong)bVar69;
                    if (uVar14 < 2) {
                      uVar88 = 0;
                      uVar81 = 0;
                    }
                    else {
                      uVar88 = (uVar77 >> 6) + iVar91 * (uVar85 * uVar85 >> (ulong)uVar104) +
                               iVar131 * (uVar92 * uVar92 >> (ulong)uVar95) & 0x3f;
                      if (uVar4 == 3) {
                        uVar81 = 0;
                      }
                      else {
                        uVar81 = (uVar77 >> 2) +
                                 iVar91 * ((uVar103 >> 0x1c) * (uVar103 >> 0x1c) >> (ulong)uVar104)
                                 + iVar131 * (uVar109 * uVar109 >> (ulong)uVar95) & 0x3f;
                      }
                    }
                    uVar76 = (uVar77 >> 0xe) + iVar91 * (uVar97 * uVar97 >> (ulong)uVar104) +
                             iVar131 * ((uVar77 & 0xf) * (uVar77 & 0xf) >> (ulong)uVar95) & 0x3f;
                    uVar98 = (uVar77 >> 10) + iVar91 * (uVar93 * uVar93 >> (ulong)uVar104) +
                             iVar131 * (uVar86 * uVar86 >> (ulong)uVar95) & 0x3f;
                    if ((uVar98 <= uVar76 && uVar88 <= uVar76) && uVar81 <= uVar76)
                    goto LAB_00aa68c0;
                    if ((uVar98 < uVar88) || (uVar98 < uVar81)) {
                      lVar78 = 2;
                      if (uVar88 < uVar81) {
                        lVar78 = 3;
                      }
                    }
                    else {
                      lVar78 = 1;
                    }
                  }
                  uVar107 = (ulong)(iVar71 + -3);
                  if (local_3b8[lVar78] == '\0') {
                    lVar1 = lVar78 * 0x20;
                    uVar88 = 0x80;
                    if (!param_3) {
                      uVar88 = *(uint *)(auStack_548 + lVar1 + -8);
                    }
                    uVar81 = 0x80;
                    if (!param_3) {
                      uVar81 = *(uint *)(local_540 + lVar1);
                    }
                    uVar88 = (0x40 - *(int *)(uVar74 + lVar96)) *
                             (uVar88 | *(uint *)(auStack_548 + lVar1 + -8) << 8) +
                             (uVar81 | *(uint *)(local_540 + lVar1) << 8) *
                             *(int *)(uVar74 + lVar96) + 0x20;
                    fVar112 = 1.0;
                    if (param_3) {
                      uVar81 = *(uint *)(auStack_548 + lVar1 + -4);
                      uVar76 = *(uint *)(local_540 + lVar1 + 4);
                      *(char *)((long)pfVar82 + uVar107) = (char)(uVar88 >> 0xe);
                      uVar88 = 0x80;
                      uVar98 = 0x80;
                    }
                    else {
                      uVar88 = uVar88 >> 6;
                      uVar81 = *(uint *)(auStack_548 + lVar1 + -4);
                      uVar76 = *(uint *)(local_540 + lVar1 + 4);
                      fVar121 = fVar112;
                      if (uVar88 != 0xffff) {
                        fVar121 = (float)(ulong)uVar88 * 1.525879e-05;
                      }
                      pfVar82[uVar107] = fVar121;
                      uVar88 = uVar81;
                      uVar98 = uVar76;
                    }
                    uVar88 = (0x40 - *(int *)(uVar105 + lVar96)) * (uVar88 | uVar81 << 8) +
                             (uVar98 | uVar76 << 8) * *(int *)(uVar105 + lVar96) + 0x20;
                    if (param_3) {
                      uVar81 = *(uint *)(auStack_548 + lVar78 * 0x20);
                      uVar76 = *(uint *)(&local_538 + lVar78 * 4);
                      *(char *)((long)pfVar82 + (uVar107 | 1)) = (char)(uVar88 >> 0xe);
                      uVar88 = 0x80;
                      uVar98 = 0x80;
                    }
                    else {
                      uVar88 = uVar88 >> 6;
                      uVar81 = *(uint *)(auStack_548 + lVar78 * 0x20);
                      uVar76 = *(uint *)(&local_538 + lVar78 * 4);
                      fVar121 = fVar112;
                      if (uVar88 != 0xffff) {
                        fVar121 = (float)(ulong)uVar88 * 1.525879e-05;
                      }
                      *(float *)((long)pfVar82 + (uVar107 << 2 | 4)) = fVar121;
                      uVar88 = uVar81;
                      uVar98 = uVar76;
                    }
                    uVar88 = (0x40 - *(int *)(uVar89 + lVar96)) * (uVar88 | uVar81 << 8) +
                             (uVar98 | uVar76 << 8) * *(int *)(uVar89 + lVar96) + 0x20;
                    if (param_3) {
                      uVar81 = *(uint *)(auStack_548 + lVar78 * 0x20 + 4);
                      uVar76 = *(uint *)((long)&local_538 + lVar78 * 0x20 + 4);
                      *(char *)((long)pfVar82 + (uVar107 | 2)) = (char)(uVar88 >> 0xe);
                      uVar88 = 0x80;
                      uVar98 = 0x80;
                    }
                    else {
                      uVar88 = uVar88 >> 6;
                      uVar81 = *(uint *)(auStack_548 + lVar78 * 0x20 + 4);
                      uVar76 = *(uint *)((long)&local_538 + lVar78 * 0x20 + 4);
                      fVar121 = fVar112;
                      if (uVar88 != 0xffff) {
                        fVar121 = (float)(ulong)uVar88 * 1.525879e-05;
                      }
                      *(float *)((long)pfVar82 + (uVar107 << 2 | 8)) = fVar121;
                      uVar88 = uVar81;
                      uVar98 = uVar76;
                    }
                    uVar88 = (0x40 - *(int *)(uVar99 + lVar96)) * (uVar88 | uVar81 << 8) +
                             (uVar98 | uVar76 << 8) * *(int *)(uVar99 + lVar96) + 0x20;
                    if (param_3) {
                      *(char *)((long)pfVar82 + (uVar107 | 3)) = (char)(uVar88 >> 0xe);
                    }
                    else {
                      uVar88 = uVar88 >> 6;
                      if (uVar88 != 0xffff) {
                        fVar112 = (float)(ulong)uVar88 * 1.525879e-05;
                      }
                      *(float *)((long)pfVar82 + (uVar107 << 2 | 0xc)) = fVar112;
                    }
                  }
                  else if (param_3) {
                    bVar67 = true;
                    *(undefined *)((long)pfVar82 + uVar107) = 0xff;
                    *(undefined2 *)((long)pfVar82 + (long)(iVar71 + -2)) = 0xff00;
                    *(undefined *)((long)pfVar82 + (long)iVar71) = 0xff;
                  }
                  else {
                    pfVar82[uVar107] = 1.0;
                    bVar67 = true;
                    pfVar82[iVar71] = 1.0;
                    pfVar82[iVar71 + -2] = 0.0;
                    pfVar82[iVar71 + -1] = 1.0;
                  }
                  lVar96 = lVar96 + 8;
                  iVar84 = iVar84 + 1;
                  iVar71 = iVar71 + 4;
                } while (uVar102 * 8 - lVar96 != 0);
              }
              uVar99 = uVar99 + uVar90;
              uVar89 = uVar89 + uVar90;
              uVar105 = uVar105 + uVar90;
              uVar74 = uVar74 + uVar90;
              uVar106 = uVar106 + 1;
              iVar75 = iVar75 + param_4 * 4;
            } while (uVar106 != (uint)param_5);
          }
        }
      }
      else {
        if (param_3) {
          uVar88 = param_5 * param_4;
          uVar102 = (ulong)uVar88;
          if (0 < (int)uVar88) {
            if (uVar88 < 8) {
              uVar99 = 0;
            }
            else {
              if (uVar88 < 0x20) {
                uVar106 = 0;
              }
              else {
                uVar99 = uVar102 & 0xffffffe0;
                puVar79 = (undefined8 *)(pfVar82 + 0x10);
                uVar106 = uVar99;
                do {
                  uVar106 = uVar106 - 0x20;
                  puVar79[-3] = 0xffff00ffffff00ff;
                  puVar79[-4] = 0xffff00ffffff00ff;
                  puVar79[-1] = 0xffff00ffffff00ff;
                  puVar79[-2] = 0xffff00ffffff00ff;
                  puVar79[-7] = 0xffff00ffffff00ff;
                  puVar79[-8] = 0xffff00ffffff00ff;
                  puVar79[-5] = 0xffff00ffffff00ff;
                  puVar79[-6] = 0xffff00ffffff00ff;
                  puVar79[5] = 0xffff00ffffff00ff;
                  puVar79[4] = 0xffff00ffffff00ff;
                  puVar79[7] = 0xffff00ffffff00ff;
                  puVar79[6] = 0xffff00ffffff00ff;
                  puVar79[1] = 0xffff00ffffff00ff;
                  *puVar79 = 0xffff00ffffff00ff;
                  puVar79[3] = 0xffff00ffffff00ff;
                  puVar79[2] = 0xffff00ffffff00ff;
                  puVar79 = puVar79 + 0x10;
                } while (uVar106 != 0);
                if (uVar99 == uVar102) goto LAB_00aa61a4;
                uVar106 = uVar99;
                if ((uVar88 & 0x18) == 0) goto LAB_00aa6180;
              }
              uVar99 = uVar102 & 0xfffffff8;
              lVar96 = uVar106 - uVar99;
              puVar79 = (undefined8 *)(pfVar82 + uVar106);
              do {
                lVar96 = lVar96 + 8;
                puVar79[1] = 0xffff00ffffff00ff;
                *puVar79 = 0xffff00ffffff00ff;
                puVar79[3] = 0xffff00ffffff00ff;
                puVar79[2] = 0xffff00ffffff00ff;
                puVar79 = puVar79 + 4;
              } while (lVar96 != 0);
              if (uVar99 == uVar102) goto LAB_00aa61a4;
            }
LAB_00aa6180:
            lVar78 = uVar102 - uVar99;
            lVar96 = (long)pfVar82 + uVar99 * 4 + 3;
            do {
              *(undefined4 *)(lVar96 + -3) = 0xffff00ff;
              lVar78 = lVar78 + -1;
              lVar96 = lVar96 + 4;
            } while (lVar78 != 0);
          }
        }
        else {
          uVar88 = param_5 * param_4;
          uVar102 = (ulong)uVar88;
          if (0 < (int)uVar88) {
            if (uVar88 < 8) {
              uVar99 = 0;
            }
            else {
              uVar99 = uVar102 & 0xfffffff8;
              puVar79 = (undefined8 *)(pfVar82 + 0x10);
              uVar106 = uVar99;
              do {
                uVar106 = uVar106 - 8;
                puVar79[-3] = uVar122;
                puVar79[-4] = uVar114;
                puVar79[-1] = uVar122;
                puVar79[-2] = uVar114;
                puVar79[-7] = uVar122;
                puVar79[-8] = uVar114;
                puVar79[-5] = uVar122;
                puVar79[-6] = uVar114;
                puVar79[5] = uVar122;
                puVar79[4] = uVar114;
                puVar79[7] = uVar122;
                puVar79[6] = uVar114;
                puVar79[1] = uVar122;
                *puVar79 = uVar114;
                puVar79[3] = uVar122;
                puVar79[2] = uVar114;
                puVar79 = puVar79 + 0x10;
              } while (uVar106 != 0);
              if (uVar99 == uVar102) goto LAB_00aa61a4;
            }
            auVar124 = _DAT_004c32c0;
            lVar96 = uVar102 - uVar99;
            puVar79 = (undefined8 *)(pfVar82 + uVar99 * 4);
            do {
              lVar96 = lVar96 + -1;
              puVar79[1] = auVar124._8_8_;
              *puVar79 = auVar124._0_8_;
              puVar79 = puVar79 + 2;
            } while (lVar96 != 0);
          }
        }
LAB_00aa61a4:
        bVar67 = true;
      }
LAB_00aa6b20:
      auVar124 = _DAT_004c3bd0;
      bVar69 = !bVar67;
      if (((!bVar67) && (!param_3)) && (0 < param_5)) {
        uVar88 = param_4 & 0xfffffff8;
        iVar75 = param_4;
        if (param_4 < 1) {
          iVar75 = 0;
        }
        iVar91 = 0;
        iVar84 = 0;
        uVar103 = param_4 & 0xfffffff0;
        iVar71 = 3;
        do {
          if (0 < param_4) {
            if ((uint)param_4 < 8) {
              uVar77 = 0;
              iVar131 = iVar91;
            }
            else {
              iVar131 = iVar71;
              uVar77 = uVar103;
              if ((uint)param_4 < 0x10) {
                uVar77 = 0;
              }
              else {
                do {
                  uVar77 = uVar77 - 0x10;
                  lVar96 = (long)(iVar131 + -3);
                  auVar161._0_4_ = (int)(local_12d0[lVar96] * 65536.0 + 0.5);
                  auVar161._4_4_ = (int)(local_12d0[lVar96 + 4] * 65536.0 + 0.5);
                  auVar161._8_4_ = (int)(local_12d0[lVar96 + 8] * 65536.0 + 0.5);
                  auVar161._12_4_ = (int)(local_12d0[lVar96 + 0xc] * 65536.0 + 0.5);
                  auVar164._0_4_ = (int)(local_12d0[lVar96 + 1] * 65536.0 + 0.5);
                  auVar164._4_4_ = (int)(local_12d0[lVar96 + 5] * 65536.0 + 0.5);
                  auVar164._8_4_ = (int)(local_12d0[lVar96 + 9] * 65536.0 + 0.5);
                  auVar164._12_4_ = (int)(local_12d0[lVar96 + 0xd] * 65536.0 + 0.5);
                  auVar44._8_4_ = 0xffff;
                  auVar44._0_8_ = 0xffff0000ffff;
                  auVar44._12_4_ = 0xffff;
                  auVar154 = NEON_umin(auVar161,auVar44,4);
                  auVar45._8_4_ = 0xffff;
                  auVar45._0_8_ = 0xffff0000ffff;
                  auVar45._12_4_ = 0xffff;
                  auVar117 = NEON_umin(auVar164,auVar45,4);
                  auVar139._8_8_ = 0xffff0000ffff;
                  auVar139._0_8_ = 0xffff0000ffff;
                  auVar166._0_4_ = (int)(local_12d0[lVar96 + 0x30] * 65536.0 + 0.5);
                  auVar166._4_4_ = (int)(local_12d0[lVar96 + 0x34] * 65536.0 + 0.5);
                  auVar166._8_4_ = (int)(local_12d0[lVar96 + 0x38] * 65536.0 + 0.5);
                  auVar166._12_4_ = (int)(local_12d0[lVar96 + 0x3c] * 65536.0 + 0.5);
                  auVar174._0_4_ = (int)(local_12d0[lVar96 + 0x31] * 65536.0 + 0.5);
                  auVar174._4_4_ = (int)(local_12d0[lVar96 + 0x35] * 65536.0 + 0.5);
                  auVar174._8_4_ = (int)(local_12d0[lVar96 + 0x39] * 65536.0 + 0.5);
                  auVar174._12_4_ = (int)(local_12d0[lVar96 + 0x3d] * 65536.0 + 0.5);
                  auVar46._8_4_ = 0xffff;
                  auVar46._0_8_ = 0xffff0000ffff;
                  auVar46._12_4_ = 0xffff;
                  auVar167 = NEON_umin(auVar166,auVar46,4);
                  auVar162._0_4_ = (int)(local_12d0[lVar96 + 0x20] * 65536.0 + 0.5);
                  auVar162._4_4_ = (int)(local_12d0[lVar96 + 0x24] * 65536.0 + 0.5);
                  auVar162._8_4_ = (int)(local_12d0[lVar96 + 0x28] * 65536.0 + 0.5);
                  auVar162._12_4_ = (int)(local_12d0[lVar96 + 0x2c] * 65536.0 + 0.5);
                  auVar47._8_4_ = 0xffff;
                  auVar47._0_8_ = 0xffff0000ffff;
                  auVar47._12_4_ = 0xffff;
                  auVar127 = NEON_umin(auVar174,auVar47,4);
                  auVar175._0_4_ = (int)(local_12d0[lVar96 + 0x22] * 65536.0 + 0.5);
                  auVar175._4_4_ = (int)(local_12d0[lVar96 + 0x26] * 65536.0 + 0.5);
                  auVar175._8_4_ = (int)(local_12d0[lVar96 + 0x2a] * 65536.0 + 0.5);
                  auVar175._12_4_ = (int)(local_12d0[lVar96 + 0x2e] * 65536.0 + 0.5);
                  auVar168._0_4_ = (int)(local_12d0[lVar96 + 2] * 65536.0 + 0.5);
                  auVar168._4_4_ = (int)(local_12d0[lVar96 + 6] * 65536.0 + 0.5);
                  auVar168._8_4_ = (int)(local_12d0[lVar96 + 10] * 65536.0 + 0.5);
                  auVar168._12_4_ = (int)(local_12d0[lVar96 + 0xe] * 65536.0 + 0.5);
                  auVar141._0_4_ = auVar117._0_4_ >> 8;
                  auVar141._4_4_ = auVar117._4_4_ >> 8;
                  auVar141._8_4_ = auVar117._8_4_ >> 8;
                  auVar141._12_4_ = auVar117._12_4_ >> 8;
                  puVar100 = param_1 + (long)iVar131 + -3;
                  auVar148._0_4_ = auVar127._0_4_ >> 8;
                  auVar148._4_4_ = auVar127._4_4_ >> 8;
                  auVar148._8_4_ = auVar127._8_4_ >> 8;
                  auVar148._12_4_ = auVar127._12_4_ >> 8;
                  auVar171._0_4_ = (int)(local_12d0[lVar96 + 0x21] * 65536.0 + 0.5);
                  auVar171._4_4_ = (int)(local_12d0[lVar96 + 0x25] * 65536.0 + 0.5);
                  auVar171._8_4_ = (int)(local_12d0[lVar96 + 0x29] * 65536.0 + 0.5);
                  auVar171._12_4_ = (int)(local_12d0[lVar96 + 0x2d] * 65536.0 + 0.5);
                  auVar158 = NEON_umin(auVar162,auVar139,4);
                  auVar134 = NEON_umin(auVar168,auVar139,4);
                  auVar172 = NEON_umin(auVar171,auVar139,4);
                  auVar176 = NEON_umin(auVar175,auVar139,4);
                  auVar151._0_4_ = (int)(local_12d0[lVar96 + 0x12] * 65536.0 + 0.5);
                  auVar151._4_4_ = (int)(local_12d0[lVar96 + 0x16] * 65536.0 + 0.5);
                  auVar151._8_4_ = (int)(local_12d0[lVar96 + 0x1a] * 65536.0 + 0.5);
                  auVar151._12_4_ = (int)(local_12d0[lVar96 + 0x1e] * 65536.0 + 0.5);
                  auVar34._4_4_ = (int)(local_12d0[lVar96 + 0x14] * 65536.0 + 0.5);
                  auVar34._0_4_ = (int)(local_12d0[lVar96 + 0x10] * 65536.0 + 0.5);
                  auVar34._8_4_ = (int)(local_12d0[lVar96 + 0x18] * 65536.0 + 0.5);
                  auVar34._12_4_ = (int)(local_12d0[lVar96 + 0x1c] * 65536.0 + 0.5);
                  auVar143 = NEON_umin(auVar34,auVar139,4);
                  auVar27._4_4_ = (int)(local_12d0[lVar96 + 0x15] * 65536.0 + 0.5);
                  auVar27._0_4_ = (int)(local_12d0[lVar96 + 0x11] * 65536.0 + 0.5);
                  auVar27._8_4_ = (int)(local_12d0[lVar96 + 0x19] * 65536.0 + 0.5);
                  auVar27._12_4_ = (int)(local_12d0[lVar96 + 0x1d] * 65536.0 + 0.5);
                  auVar127 = NEON_umin(auVar27,auVar139,4);
                  auVar169._0_4_ = (int)(local_12d0[lVar96 + 0x32] * 65536.0 + 0.5);
                  auVar169._4_4_ = (int)(local_12d0[lVar96 + 0x36] * 65536.0 + 0.5);
                  auVar169._8_4_ = (int)((float)uStack_1318 * 65536.0 + 0.5);
                  auVar169._12_4_ = (int)((float)((ulong)uStack_1318 >> 0x20) * 65536.0 + 0.5);
                  auVar117 = NEON_umin(auVar151,auVar139,4);
                  auVar146._0_4_ = auVar172._0_4_ >> 8;
                  auVar146._4_4_ = auVar172._4_4_ >> 8;
                  auVar146._8_4_ = auVar172._8_4_ >> 8;
                  auVar146._12_4_ = auVar172._12_4_ >> 8;
                  auVar172 = NEON_umin(auVar169,auVar139,4);
                  auVar144._0_4_ = auVar127._0_4_ >> 8;
                  auVar144._4_4_ = auVar127._4_4_ >> 8;
                  auVar144._8_4_ = auVar127._8_4_ >> 8;
                  auVar144._12_4_ = auVar127._12_4_ >> 8;
                  auVar165._0_4_ = auVar134._0_4_ >> 8;
                  auVar165._4_4_ = auVar134._4_4_ >> 8;
                  auVar165._8_4_ = auVar134._8_4_ >> 8;
                  auVar165._12_4_ = auVar134._12_4_ >> 8;
                  auVar119._0_4_ = (int)(local_12d0[lVar96 + 3] * 65536.0 + 0.5);
                  auVar119._4_4_ = (int)(local_12d0[lVar96 + 7] * 65536.0 + 0.5);
                  auVar119._8_4_ = (int)((float)uStack_1348 * 65536.0 + 0.5);
                  auVar119._12_4_ = (int)((float)((ulong)uStack_1348 >> 0x20) * 65536.0 + 0.5);
                  auVar129._0_4_ = (int)(local_12d0[lVar96 + 0x33] * 65536.0 + 0.5);
                  auVar129._4_4_ = (int)(local_12d0[lVar96 + 0x37] * 65536.0 + 0.5);
                  auVar129._8_4_ = (int)((float)uStack_1308 * 65536.0 + 0.5);
                  auVar129._12_4_ = (int)((float)((ulong)uStack_1308 >> 0x20) * 65536.0 + 0.5);
                  auVar173._0_4_ = auVar176._0_4_ >> 8;
                  auVar173._4_4_ = auVar176._4_4_ >> 8;
                  auVar173._8_4_ = auVar176._8_4_ >> 8;
                  auVar173._12_4_ = auVar176._12_4_ >> 8;
                  auVar170._0_4_ = auVar117._0_4_ >> 8;
                  auVar170._4_4_ = auVar117._4_4_ >> 8;
                  auVar170._8_4_ = auVar117._8_4_ >> 8;
                  auVar170._12_4_ = auVar117._12_4_ >> 8;
                  auVar152._0_4_ = (int)(local_12d0[lVar96 + 0x13] * 65536.0 + 0.5);
                  auVar152._4_4_ = (int)(local_12d0[lVar96 + 0x17] * 65536.0 + 0.5);
                  auVar152._8_4_ = (int)(local_12d0[lVar96 + 0x1b] * 65536.0 + 0.5);
                  auVar152._12_4_ = (int)(local_12d0[lVar96 + 0x1f] * 65536.0 + 0.5);
                  auVar48._8_4_ = 0xffff;
                  auVar48._0_8_ = 0xffff0000ffff;
                  auVar48._12_4_ = 0xffff;
                  auVar117 = NEON_umin(auVar119,auVar48,4);
                  auVar49._8_4_ = 0xffff;
                  auVar49._0_8_ = 0xffff0000ffff;
                  auVar49._12_4_ = 0xffff;
                  auVar127 = NEON_umin(auVar129,auVar49,4);
                  auVar50._8_4_ = 0xffff;
                  auVar50._0_8_ = 0xffff0000ffff;
                  auVar50._12_4_ = 0xffff;
                  auVar134 = NEON_umin(auVar152,auVar50,4);
                  auVar156._0_4_ = auVar117._0_4_ >> 8;
                  auVar156._4_4_ = auVar117._4_4_ >> 8;
                  auVar156._8_4_ = auVar117._8_4_ >> 8;
                  auVar156._12_4_ = auVar117._12_4_ >> 8;
                  auVar163._0_4_ = auVar127._0_4_ >> 8;
                  auVar163._4_4_ = auVar127._4_4_ >> 8;
                  auVar163._8_4_ = auVar127._8_4_ >> 8;
                  auVar163._12_4_ = auVar127._12_4_ >> 8;
                  auVar23._4_4_ = auVar154._4_4_ >> 8;
                  auVar23._0_4_ = auVar154._0_4_ >> 8;
                  auVar23._8_4_ = auVar154._8_4_ >> 8;
                  auVar23._12_4_ = auVar154._12_4_ >> 8;
                  auVar24._4_4_ = auVar143._4_4_ >> 8;
                  auVar24._0_4_ = auVar143._0_4_ >> 8;
                  auVar24._8_4_ = auVar143._8_4_ >> 8;
                  auVar24._12_4_ = auVar143._12_4_ >> 8;
                  auVar25._4_4_ = auVar158._4_4_ >> 8;
                  auVar25._0_4_ = auVar158._0_4_ >> 8;
                  auVar25._8_4_ = auVar158._8_4_ >> 8;
                  auVar25._12_4_ = auVar158._12_4_ >> 8;
                  auVar26._4_4_ = auVar167._4_4_ >> 8;
                  auVar26._0_4_ = auVar167._0_4_ >> 8;
                  auVar26._8_4_ = auVar167._8_4_ >> 8;
                  auVar26._12_4_ = auVar167._12_4_ >> 8;
                  auVar127 = a64_TBL(ZEXT816(0),auVar23,auVar24,auVar25,auVar26,auVar124);
                  auVar135._0_4_ = (int)(local_12d0[lVar96 + 0x23] * 65536.0 + 0.5);
                  auVar135._4_4_ = (int)(local_12d0[lVar96 + 0x27] * 65536.0 + 0.5);
                  auVar135._8_4_ = (int)(local_12d0[lVar96 + 0x2b] * 65536.0 + 0.5);
                  auVar135._12_4_ = (int)(local_12d0[lVar96 + 0x2f] * 65536.0 + 0.5);
                  auVar143 = a64_TBL(ZEXT816(0),auVar141,auVar144,auVar146,auVar148,auVar124);
                  auVar35._4_4_ = auVar172._4_4_ >> 8;
                  auVar35._0_4_ = auVar172._0_4_ >> 8;
                  auVar35._8_4_ = auVar172._8_4_ >> 8;
                  auVar35._12_4_ = auVar172._12_4_ >> 8;
                  auVar154 = a64_TBL(ZEXT816(0),auVar165,auVar170,auVar173,auVar35,auVar124);
                  auVar51._8_4_ = 0xffff;
                  auVar51._0_8_ = 0xffff0000ffff;
                  auVar51._12_4_ = 0xffff;
                  auVar117 = NEON_umin(auVar135,auVar51,4);
                  auVar160._0_4_ = auVar134._0_4_ >> 8;
                  auVar160._4_4_ = auVar134._4_4_ >> 8;
                  auVar160._8_4_ = auVar134._8_4_ >> 8;
                  auVar160._12_4_ = auVar134._12_4_ >> 8;
                  auVar29._4_4_ = auVar117._4_4_ >> 8;
                  auVar29._0_4_ = auVar117._0_4_ >> 8;
                  auVar29._8_4_ = auVar117._8_4_ >> 8;
                  auVar29._12_4_ = auVar117._12_4_ >> 8;
                  auVar117 = a64_TBL(ZEXT816(0),auVar156,auVar160,auVar29,auVar163,auVar124);
                  *puVar100 = auVar127[0];
                  puVar100[1] = auVar143[0];
                  puVar100[2] = auVar154[0];
                  puVar100[3] = auVar117[0];
                  puVar100[4] = auVar127[1];
                  puVar100[5] = auVar143[1];
                  puVar100[6] = auVar154[1];
                  puVar100[7] = auVar117[1];
                  puVar100[8] = auVar127[2];
                  puVar100[9] = auVar143[2];
                  puVar100[10] = auVar154[2];
                  puVar100[0xb] = auVar117[2];
                  puVar100[0xc] = auVar127[3];
                  puVar100[0xd] = auVar143[3];
                  puVar100[0xe] = auVar154[3];
                  puVar100[0xf] = auVar117[3];
                  puVar100[0x10] = auVar127[4];
                  puVar100[0x11] = auVar143[4];
                  puVar100[0x12] = auVar154[4];
                  puVar100[0x13] = auVar117[4];
                  puVar100[0x14] = auVar127[5];
                  puVar100[0x15] = auVar143[5];
                  puVar100[0x16] = auVar154[5];
                  puVar100[0x17] = auVar117[5];
                  puVar100[0x18] = auVar127[6];
                  puVar100[0x19] = auVar143[6];
                  puVar100[0x1a] = auVar154[6];
                  puVar100[0x1b] = auVar117[6];
                  puVar100[0x1c] = auVar127[7];
                  puVar100[0x1d] = auVar143[7];
                  puVar100[0x1e] = auVar154[7];
                  puVar100[0x1f] = auVar117[7];
                  puVar100[0x20] = auVar127[8];
                  puVar100[0x21] = auVar143[8];
                  puVar100[0x22] = auVar154[8];
                  puVar100[0x23] = auVar117[8];
                  puVar100[0x24] = auVar127[9];
                  puVar100[0x25] = auVar143[9];
                  puVar100[0x26] = auVar154[9];
                  puVar100[0x27] = auVar117[9];
                  puVar100[0x28] = auVar127[10];
                  puVar100[0x29] = auVar143[10];
                  puVar100[0x2a] = auVar154[10];
                  puVar100[0x2b] = auVar117[10];
                  puVar100[0x2c] = auVar127[11];
                  puVar100[0x2d] = auVar143[11];
                  puVar100[0x2e] = auVar154[11];
                  puVar100[0x2f] = auVar117[11];
                  puVar100[0x30] = auVar127[12];
                  puVar100[0x31] = auVar143[12];
                  puVar100[0x32] = auVar154[12];
                  puVar100[0x33] = auVar117[12];
                  puVar100[0x34] = auVar127[13];
                  puVar100[0x35] = auVar143[13];
                  puVar100[0x36] = auVar154[13];
                  puVar100[0x37] = auVar117[13];
                  puVar100[0x38] = auVar127[14];
                  puVar100[0x39] = auVar143[14];
                  puVar100[0x3a] = auVar154[14];
                  puVar100[0x3b] = auVar117[14];
                  puVar100[0x3c] = auVar127[15];
                  puVar100[0x3d] = auVar143[15];
                  puVar100[0x3e] = auVar154[15];
                  puVar100[0x3f] = auVar117[15];
                  iVar131 = iVar131 + 0x40;
                } while (uVar77 != 0);
                if (uVar103 == param_4) goto LAB_00aa6b8c;
                uVar77 = uVar103;
                if (((uint)param_4 >> 3 & 1) == 0) {
                  iVar131 = iVar91 + uVar103;
                  goto LAB_00aa6ea8;
                }
              }
              iVar131 = iVar91 + uVar88;
              iVar136 = uVar77 - uVar88;
              iVar130 = (uVar77 + iVar91) * 4;
              do {
                iVar136 = iVar136 + 8;
                lVar96 = (long)iVar130;
                auVar116._0_4_ = (int)(local_12d0[iVar130] * 65536.0 + 0.5);
                auVar116._4_4_ = (int)(local_12d0[(long)iVar130 + 4] * 65536.0 + 0.5);
                auVar116._8_4_ = (int)(local_12d0[(long)iVar130 + 8] * 65536.0 + 0.5);
                auVar116._12_4_ = (int)(local_12d0[(long)iVar130 + 0xc] * 65536.0 + 0.5);
                auVar142._0_4_ = (int)(local_12d0[(long)iVar130 + 3] * 65536.0 + 0.5);
                auVar142._4_4_ = (int)(local_12d0[(long)iVar130 + 7] * 65536.0 + 0.5);
                auVar142._8_4_ = (int)(local_12d0[(long)iVar130 + 0xb] * 65536.0 + 0.5);
                auVar142._12_4_ = (int)(local_12d0[(long)iVar130 + 0xf] * 65536.0 + 0.5);
                auVar126._0_4_ = (int)(local_12d0[(long)iVar130 + 1] * 65536.0 + 0.5);
                auVar126._4_4_ = (int)(local_12d0[(long)iVar130 + 5] * 65536.0 + 0.5);
                auVar126._8_4_ = (int)(local_12d0[(long)iVar130 + 9] * 65536.0 + 0.5);
                auVar126._12_4_ = (int)(local_12d0[(long)iVar130 + 0xd] * 65536.0 + 0.5);
                lVar78 = (long)iVar130;
                lVar1 = (long)iVar130;
                lVar54 = (long)iVar130;
                lVar55 = (long)iVar130;
                lVar56 = (long)iVar130;
                lVar57 = (long)iVar130;
                lVar58 = (long)iVar130;
                lVar59 = (long)iVar130;
                lVar60 = (long)iVar130;
                lVar61 = (long)iVar130;
                lVar62 = (long)iVar130;
                lVar63 = (long)iVar130;
                lVar64 = (long)iVar130;
                lVar65 = (long)iVar130;
                lVar66 = (long)iVar130;
                auVar133._0_4_ = (int)(local_12d0[(long)iVar130 + 2] * 65536.0 + 0.5);
                auVar133._4_4_ = (int)(local_12d0[(long)iVar130 + 6] * 65536.0 + 0.5);
                auVar133._8_4_ = (int)(local_12d0[(long)iVar130 + 10] * 65536.0 + 0.5);
                auVar133._12_4_ = (int)(local_12d0[(long)iVar130 + 0xe] * 65536.0 + 0.5);
                auVar36._8_4_ = 0xffff;
                auVar36._0_8_ = 0xffff0000ffff;
                auVar36._12_4_ = 0xffff;
                auVar117 = NEON_umin(auVar116,auVar36,4);
                iVar5 = iVar130 + 3;
                auVar37._8_4_ = 0xffff;
                auVar37._0_8_ = 0xffff0000ffff;
                auVar37._12_4_ = 0xffff;
                auVar127 = NEON_umin(auVar126,auVar37,4);
                iVar130 = iVar130 + 0x20;
                auVar38._8_4_ = 0xffff;
                auVar38._0_8_ = 0xffff0000ffff;
                auVar38._12_4_ = 0xffff;
                auVar143 = NEON_umin(auVar142,auVar38,4);
                puVar100 = param_1 + (long)iVar5 + -3;
                auVar39._8_4_ = 0xffff;
                auVar39._0_8_ = 0xffff0000ffff;
                auVar39._12_4_ = 0xffff;
                auVar134 = NEON_umin(auVar133,auVar39,4);
                auVar145._0_4_ = auVar117._0_4_ >> 8;
                auVar145._4_4_ = auVar117._4_4_ >> 8;
                auVar145._8_4_ = auVar117._8_4_ >> 8;
                auVar145._12_4_ = auVar117._12_4_ >> 8;
                auVar118._0_4_ = auVar127._0_4_ >> 8;
                auVar118._4_4_ = auVar127._4_4_ >> 8;
                auVar118._8_4_ = auVar127._8_4_ >> 8;
                auVar118._12_4_ = auVar127._12_4_ >> 8;
                auVar149._0_4_ = (int)(local_12d0[lVar96 + 0x10] * 65536.0 + 0.5);
                auVar149._4_4_ = (int)(local_12d0[lVar55 + 0x14] * 65536.0 + 0.5);
                auVar149._8_4_ = (int)(local_12d0[lVar59 + 0x18] * 65536.0 + 0.5);
                auVar149._12_4_ = (int)(local_12d0[lVar63 + 0x1c] * 65536.0 + 0.5);
                auVar153._0_4_ = (int)(local_12d0[lVar78 + 0x11] * 65536.0 + 0.5);
                auVar153._4_4_ = (int)(local_12d0[lVar56 + 0x15] * 65536.0 + 0.5);
                auVar153._8_4_ = (int)(local_12d0[lVar60 + 0x19] * 65536.0 + 0.5);
                auVar153._12_4_ = (int)(local_12d0[lVar64 + 0x1d] * 65536.0 + 0.5);
                auVar157._0_4_ = (int)(local_12d0[lVar1 + 0x12] * 65536.0 + 0.5);
                auVar157._4_4_ = (int)(local_12d0[lVar57 + 0x16] * 65536.0 + 0.5);
                auVar157._8_4_ = (int)(local_12d0[lVar61 + 0x1a] * 65536.0 + 0.5);
                auVar157._12_4_ = (int)(local_12d0[lVar65 + 0x1e] * 65536.0 + 0.5);
                auVar140._0_4_ = (int)(local_12d0[lVar54 + 0x13] * 65536.0 + 0.5);
                auVar140._4_4_ = (int)(local_12d0[lVar58 + 0x17] * 65536.0 + 0.5);
                auVar140._8_4_ = (int)(local_12d0[lVar62 + 0x1b] * 65536.0 + 0.5);
                auVar140._12_4_ = (int)(local_12d0[lVar66 + 0x1f] * 65536.0 + 0.5);
                auVar40._8_4_ = 0xffff;
                auVar40._0_8_ = 0xffff0000ffff;
                auVar40._12_4_ = 0xffff;
                auVar127 = NEON_umin(auVar149,auVar40,4);
                auVar41._8_4_ = 0xffff;
                auVar41._0_8_ = 0xffff0000ffff;
                auVar41._12_4_ = 0xffff;
                auVar154 = NEON_umin(auVar153,auVar41,4);
                auVar42._8_4_ = 0xffff;
                auVar42._0_8_ = 0xffff0000ffff;
                auVar42._12_4_ = 0xffff;
                auVar158 = NEON_umin(auVar157,auVar42,4);
                auVar43._8_4_ = 0xffff;
                auVar43._0_8_ = 0xffff0000ffff;
                auVar43._12_4_ = 0xffff;
                auVar117 = NEON_umin(auVar140,auVar43,4);
                auVar147._0_4_ = auVar127._0_4_ >> 8;
                auVar147._4_4_ = auVar127._4_4_ >> 8;
                auVar147._8_4_ = auVar127._8_4_ >> 8;
                auVar147._12_4_ = auVar127._12_4_ >> 8;
                auVar128._0_4_ = auVar154._0_4_ >> 8;
                auVar128._4_4_ = auVar154._4_4_ >> 8;
                auVar128._8_4_ = auVar154._8_4_ >> 8;
                auVar128._12_4_ = auVar154._12_4_ >> 8;
                auVar150._0_4_ = auVar134._0_4_ >> 8;
                auVar150._4_4_ = auVar134._4_4_ >> 8;
                auVar150._8_4_ = auVar134._8_4_ >> 8;
                auVar150._12_4_ = auVar134._12_4_ >> 8;
                auVar155._0_4_ = auVar158._0_4_ >> 8;
                auVar155._4_4_ = auVar158._4_4_ >> 8;
                auVar155._8_4_ = auVar158._8_4_ >> 8;
                auVar155._12_4_ = auVar158._12_4_ >> 8;
                auVar159._0_4_ = auVar143._0_4_ >> 8;
                auVar159._4_4_ = auVar143._4_4_ >> 8;
                auVar159._8_4_ = auVar143._8_4_ >> 8;
                auVar159._12_4_ = auVar143._12_4_ >> 8;
                auVar30._8_4_ = 0xffffffff;
                auVar30._0_8_ = 0x1c1814100c080400;
                auVar30._12_4_ = 0xffffffff;
                auVar127 = a64_TBL(ZEXT816(0),auVar145,auVar147,auVar30);
                auVar31._8_4_ = 0xffffffff;
                auVar31._0_8_ = 0x1c1814100c080400;
                auVar31._12_4_ = 0xffffffff;
                auVar134 = a64_TBL(ZEXT816(0),auVar118,auVar128,auVar31);
                auVar32._8_4_ = 0xffffffff;
                auVar32._0_8_ = 0x1c1814100c080400;
                auVar32._12_4_ = 0xffffffff;
                auVar143 = a64_TBL(ZEXT816(0),auVar150,auVar155,auVar32);
                auVar28._4_4_ = auVar117._4_4_ >> 8;
                auVar28._0_4_ = auVar117._0_4_ >> 8;
                auVar28._8_4_ = auVar117._8_4_ >> 8;
                auVar28._12_4_ = auVar117._12_4_ >> 8;
                auVar33._8_4_ = 0xffffffff;
                auVar33._0_8_ = 0x1c1814100c080400;
                auVar33._12_4_ = 0xffffffff;
                auVar117 = a64_TBL(ZEXT816(0),auVar159,auVar28,auVar33);
                *puVar100 = auVar127[0];
                puVar100[1] = auVar134[0];
                puVar100[2] = auVar143[0];
                puVar100[3] = auVar117[0];
                puVar100[4] = auVar127[1];
                puVar100[5] = auVar134[1];
                puVar100[6] = auVar143[1];
                puVar100[7] = auVar117[1];
                puVar100[8] = auVar127[2];
                puVar100[9] = auVar134[2];
                puVar100[10] = auVar143[2];
                puVar100[0xb] = auVar117[2];
                puVar100[0xc] = auVar127[3];
                puVar100[0xd] = auVar134[3];
                puVar100[0xe] = auVar143[3];
                puVar100[0xf] = auVar117[3];
                puVar100[0x10] = auVar127[4];
                puVar100[0x11] = auVar134[4];
                puVar100[0x12] = auVar143[4];
                puVar100[0x13] = auVar117[4];
                puVar100[0x14] = auVar127[5];
                puVar100[0x15] = auVar134[5];
                puVar100[0x16] = auVar143[5];
                puVar100[0x17] = auVar117[5];
                puVar100[0x18] = auVar127[6];
                puVar100[0x19] = auVar134[6];
                puVar100[0x1a] = auVar143[6];
                puVar100[0x1b] = auVar117[6];
                puVar100[0x1c] = auVar127[7];
                puVar100[0x1d] = auVar134[7];
                puVar100[0x1e] = auVar143[7];
                puVar100[0x1f] = auVar117[7];
              } while (iVar136 != 0);
              uVar77 = uVar88;
              if (uVar88 == param_4) goto LAB_00aa6b8c;
            }
LAB_00aa6ea8:
            iVar136 = param_4 - uVar77;
            puVar70 = (undefined4 *)(param_1 + (iVar131 << 2));
            pauVar73 = (undefined (*) [16])(local_12d0 + (iVar131 << 2));
            do {
              iVar136 = iVar136 + -1;
              auVar117 = *pauVar73;
              auVar120._0_8_ =
                   CONCAT44((int)(auVar117._4_4_ * 65536.0 + 0.5),
                            (int)(auVar117._0_4_ * 65536.0 + 0.5));
              auVar120._8_4_ = (int)(auVar117._8_4_ * 65536.0 + 0.5);
              auVar120._12_4_ = (int)(auVar117._12_4_ * 65536.0 + 0.5);
              uVar114 = NEON_uqxtn(auVar120._0_8_,auVar120,4);
              *puVar70 = CONCAT13((char)((ulong)uVar114 >> 0x38),
                                  CONCAT12((char)((ulong)uVar114 >> 0x28),
                                           CONCAT11((char)((ulong)uVar114 >> 0x18),
                                                    (char)((ulong)uVar114 >> 8))));
              puVar70 = puVar70 + 1;
              pauVar73 = pauVar73 + 1;
            } while (iVar136 != 0);
          }
LAB_00aa6b8c:
          iVar84 = iVar84 + 1;
          iVar71 = iVar71 + iVar75 * 4;
          iVar91 = iVar91 + iVar75;
        } while (iVar84 != param_5);
      }
      goto LAB_00aa4e48;
    }
  }
  if (param_3) {
    uVar88 = param_5 * param_4;
    uVar102 = (ulong)uVar88;
    if (0 < (int)uVar88) {
      if (uVar88 < 8) {
        uVar99 = 0;
      }
      else {
        if (uVar88 < 0x20) {
          uVar106 = 0;
        }
        else {
          uVar99 = uVar102 & 0xffffffe0;
          puVar79 = (undefined8 *)(pfVar82 + 0x10);
          uVar106 = uVar99;
          do {
            uVar106 = uVar106 - 0x20;
            puVar79[-3] = 0xffff00ffffff00ff;
            puVar79[-4] = 0xffff00ffffff00ff;
            puVar79[-1] = 0xffff00ffffff00ff;
            puVar79[-2] = 0xffff00ffffff00ff;
            puVar79[-7] = 0xffff00ffffff00ff;
            puVar79[-8] = 0xffff00ffffff00ff;
            puVar79[-5] = 0xffff00ffffff00ff;
            puVar79[-6] = 0xffff00ffffff00ff;
            puVar79[5] = 0xffff00ffffff00ff;
            puVar79[4] = 0xffff00ffffff00ff;
            puVar79[7] = 0xffff00ffffff00ff;
            puVar79[6] = 0xffff00ffffff00ff;
            puVar79[1] = 0xffff00ffffff00ff;
            *puVar79 = 0xffff00ffffff00ff;
            puVar79[3] = 0xffff00ffffff00ff;
            puVar79[2] = 0xffff00ffffff00ff;
            puVar79 = puVar79 + 0x10;
          } while (uVar106 != 0);
          if (uVar99 == uVar102) goto LAB_00aa4e44;
          uVar106 = uVar99;
          if ((uVar88 & 0x18) == 0) goto LAB_00aa4e24;
        }
        uVar99 = uVar102 & 0xfffffff8;
        lVar96 = uVar106 - uVar99;
        puVar79 = (undefined8 *)(pfVar82 + uVar106);
        do {
          lVar96 = lVar96 + 8;
          puVar79[1] = 0xffff00ffffff00ff;
          *puVar79 = 0xffff00ffffff00ff;
          puVar79[3] = 0xffff00ffffff00ff;
          puVar79[2] = 0xffff00ffffff00ff;
          puVar79 = puVar79 + 4;
        } while (lVar96 != 0);
        if (uVar99 == uVar102) goto LAB_00aa4e44;
      }
LAB_00aa4e24:
      lVar78 = uVar102 - uVar99;
      lVar96 = (long)pfVar82 + uVar99 * 4 + 3;
      do {
        *(undefined4 *)(lVar96 + -3) = 0xffff00ff;
        lVar78 = lVar78 + -1;
        lVar96 = lVar96 + 4;
      } while (lVar78 != 0);
    }
  }
  else {
    uVar88 = param_5 * param_4;
    uVar102 = (ulong)uVar88;
    if (0 < (int)uVar88) {
      if (uVar88 < 8) {
        uVar99 = 0;
      }
      else {
        uVar99 = uVar102 & 0xfffffff8;
        puVar79 = (undefined8 *)(pfVar82 + 0x10);
        uVar106 = uVar99;
        do {
          uVar106 = uVar106 - 8;
          puVar79[-3] = uVar122;
          puVar79[-4] = uVar114;
          puVar79[-1] = uVar122;
          puVar79[-2] = uVar114;
          puVar79[-7] = uVar122;
          puVar79[-8] = uVar114;
          puVar79[-5] = uVar122;
          puVar79[-6] = uVar114;
          puVar79[5] = uVar122;
          puVar79[4] = uVar114;
          puVar79[7] = uVar122;
          puVar79[6] = uVar114;
          puVar79[1] = uVar122;
          *puVar79 = uVar114;
          puVar79[3] = uVar122;
          puVar79[2] = uVar114;
          puVar79 = puVar79 + 0x10;
        } while (uVar106 != 0);
        if (uVar99 == uVar102) goto LAB_00aa4e44;
      }
      auVar124 = _DAT_004c32c0;
      lVar96 = uVar102 - uVar99;
      puVar79 = (undefined8 *)(pfVar82 + uVar99 * 4);
      do {
        lVar96 = lVar96 + -1;
        puVar79[1] = auVar124._8_8_;
        *puVar79 = auVar124._0_8_;
        puVar79 = puVar79 + 2;
      } while (lVar96 != 0);
    }
  }
LAB_00aa4e44:
  bVar69 = false;
LAB_00aa4e48:
  if (*(long *)(lVar22 + 0x28) == local_b8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar69);
}


