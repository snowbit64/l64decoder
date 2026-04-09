// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00ca0270
// Entry Point: 00ca0270
// Size: 2136 bytes
// Signature: undefined FUN_00ca0270(void)


void FUN_00ca0270(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  undefined **local_288;
  void *local_280;
  void *local_278;
  undefined **local_268;
  void *local_260;
  void *local_258;
  undefined **local_248;
  void *local_240;
  void *local_238;
  undefined **local_228;
  void *local_220;
  void *local_218;
  undefined **local_208;
  void *local_200;
  void *local_1f8;
  undefined **local_1e8;
  void *local_1e0;
  void *local_1d8;
  undefined **local_1c8;
  void *local_1c0;
  void *local_1b8;
  undefined **local_1a8;
  void *local_1a0;
  void *local_198;
  undefined **local_188;
  void *local_180;
  void *local_178;
  undefined **local_168;
  void *local_160;
  void *local_158;
  undefined **local_148;
  void *local_140;
  void *local_138;
  undefined **local_128;
  void *local_120;
  void *local_118;
  undefined **local_108;
  void *local_100;
  void *local_f8;
  undefined **local_e8;
  void *local_e0;
  void *local_d8;
  undefined **local_c8;
  void *local_c0;
  void *local_b8;
  undefined **local_a8;
  void *local_a0;
  void *local_98;
  undefined **local_88;
  void *local_80;
  void *local_78;
  undefined **local_68;
  void *local_60;
  void *local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((DAT_0211f738 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0211f738), iVar2 != 0)) {
                    /* try { // try from 00ca02f8 to 00ca0303 has its CatchHandler @ 00ca1408 */
    CryptoPP::ASN1::sect163k1();
                    /* try { // try from 00ca0304 to 00ca0353 has its CatchHandler @ 00ca13e0 */
    CryptoPP::EcRecommendedParameters<CryptoPP::EC2N>::EcRecommendedParameters
              ((EcRecommendedParameters<CryptoPP::EC2N> *)&DAT_0211f740,(OID *)&local_68,0xa3,7,6,3,
               0,"000000000000000000000000000000000000000001",
               "000000000000000000000000000000000000000001",
               "0402FE13C0537BBC11ACAA07D793DE4E6D5E5C94EEE80289070FB05D38FF58321F2E800536D538CCDAA3D9"
               ,"04000000000000000000020108A2E0CC0D99F8A5EF",2);
                    /* try { // try from 00ca0354 to 00ca035b has its CatchHandler @ 00ca13b8 */
    CryptoPP::ASN1::sect163r1();
                    /* try { // try from 00ca035c to 00ca03af has its CatchHandler @ 00ca1390 */
    CryptoPP::EcRecommendedParameters<CryptoPP::EC2N>::EcRecommendedParameters
              ((EcRecommendedParameters<CryptoPP::EC2N> *)&DAT_0211f798,(OID *)&local_88,0xa3,7,6,3,
               0,"07B6882CAAEFA84F9554FF8428BD88E246D2782AE2",
               "0713612DCDDCB40AAB946BDA29CA91F73AF958AFD9",
               "040369979697AB43897789566789567F787A7876A65400435EDB42EFAFB2989D51FEFCE3C80988F41FF883"
               ,"03FFFFFFFFFFFFFFFFFFFF48AAB689C29CA710279B",2);
                    /* try { // try from 00ca03b0 to 00ca03b7 has its CatchHandler @ 00ca1368 */
    CryptoPP::ASN1::sect239k1();
                    /* try { // try from 00ca03b8 to 00ca03ff has its CatchHandler @ 00ca1340 */
    CryptoPP::EcRecommendedParameters<CryptoPP::EC2N>::EcRecommendedParameters
              ((EcRecommendedParameters<CryptoPP::EC2N> *)&DAT_0211f7f0,(OID *)&local_a8,0xef,0x9e,0
               ,"000000000000000000000000000000000000000000000000000000000000",
               "000000000000000000000000000000000000000000000000000000000001",
               "0429A0B6A887A983E9730988A68727A8B2D126C44CC2CC7B2A6555193035DC76310804F12E549BDB011C103089E73510ACB275FC312A5DC6B76553F0CA"
               ,"2000000000000000000000000000005A79FEC67CB6E91F1C1DA800E478A5",4);
                    /* try { // try from 00ca0400 to 00ca0407 has its CatchHandler @ 00ca1318 */
    CryptoPP::ASN1::sect113r1();
                    /* try { // try from 00ca0408 to 00ca044f has its CatchHandler @ 00ca12f0 */
    CryptoPP::EcRecommendedParameters<CryptoPP::EC2N>::EcRecommendedParameters
              ((EcRecommendedParameters<CryptoPP::EC2N> *)&DAT_0211f848,(OID *)&local_c8,0x71,9,0,
               "003088250CA6E7C7FE649CE85820F7","00E8BEE4D3E2260744188BE0E9C723",
               "04009D73616F35F4AB1407D73562C10F00A52830277958EE84D1315ED31886",
               "0100000000000000D9CCEC8A39E56F",2);
                    /* try { // try from 00ca0450 to 00ca0457 has its CatchHandler @ 00ca12c8 */
    CryptoPP::ASN1::sect113r2();
                    /* try { // try from 00ca0458 to 00ca049f has its CatchHandler @ 00ca12a0 */
    CryptoPP::EcRecommendedParameters<CryptoPP::EC2N>::EcRecommendedParameters
              ((EcRecommendedParameters<CryptoPP::EC2N> *)&DAT_0211f8a0,(OID *)&local_e8,0x71,9,0,
               "00689918DBEC7E5A0DD6DFC0AA55C7","0095E9A9EC9B297BD4BF36E059184F",
               "0401A57A6A7B26CA5EF52FCDB816479700B3ADC94ED1FE674C06E695BABA1D",
               "010000000000000108789B2496AF93",2);
                    /* try { // try from 00ca04a0 to 00ca04a7 has its CatchHandler @ 00ca1278 */
    CryptoPP::ASN1::sect163r2();
                    /* try { // try from 00ca04a8 to 00ca04fb has its CatchHandler @ 00ca1250 */
    CryptoPP::EcRecommendedParameters<CryptoPP::EC2N>::EcRecommendedParameters
              ((EcRecommendedParameters<CryptoPP::EC2N> *)&DAT_0211f8f8,(OID *)&local_108,0xa3,7,6,3
               ,0,"000000000000000000000000000000000000000001",
               "020A601907B8C953CA1481EB10512F78744A3205FD",
               "0403F0EBA16286A2D57EA0991168D4994637E8343E3600D51FBC6C71A0094FA2CDD545B11C5C0C797324F1"
               ,"040000000000000000000292FE77E70C12A4234C33",2);
                    /* try { // try from 00ca04fc to 00ca0503 has its CatchHandler @ 00ca1228 */
    CryptoPP::ASN1::sect283k1();
                    /* try { // try from 00ca0504 to 00ca0557 has its CatchHandler @ 00ca1200 */
    CryptoPP::EcRecommendedParameters<CryptoPP::EC2N>::EcRecommendedParameters
              ((EcRecommendedParameters<CryptoPP::EC2N> *)&DAT_0211f950,(OID *)&local_128,0x11b,0xc,
               7,5,0,"000000000000000000000000000000000000000000000000000000000000000000000000",
               "000000000000000000000000000000000000000000000000000000000000000000000001",
               "040503213F78CA44883F1A3B8162F188E553CD265F23C1567A16876913B0C2AC245849283601CCDA380F1C9E318D90F95D07E5426FE87E45C0E8184698E45962364E34116177DD2259"
               ,"01FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFE9AE2ED07577265DFF7F94451E061E163C61",4);
                    /* try { // try from 00ca0558 to 00ca055f has its CatchHandler @ 00ca11d8 */
    CryptoPP::ASN1::sect283r1();
                    /* try { // try from 00ca0560 to 00ca05b3 has its CatchHandler @ 00ca11b0 */
    CryptoPP::EcRecommendedParameters<CryptoPP::EC2N>::EcRecommendedParameters
              ((EcRecommendedParameters<CryptoPP::EC2N> *)&DAT_0211f9a8,(OID *)&local_148,0x11b,0xc,
               7,5,0,"000000000000000000000000000000000000000000000000000000000000000000000001",
               "027B680AC8B8596DA5A4AF8A19A0303FCA97FD7645309FA2A581485AF6263E313B79A2F5",
               "0405F939258DB7DD90E1934F8C70B0DFEC2EED25B8557EAC9C80E2E198F8CDBECD86B1205303676854FE24141CB98FE6D4B20D02B4516FF702350EDDB0826779C813F0DF45BE8112F4"
               ,"03FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEF90399660FC938A90165B042A7CEFADB307",2);
                    /* try { // try from 00ca05b4 to 00ca05bb has its CatchHandler @ 00ca1188 */
    CryptoPP::ASN1::sect131r1();
                    /* try { // try from 00ca05bc to 00ca060f has its CatchHandler @ 00ca1160 */
    CryptoPP::EcRecommendedParameters<CryptoPP::EC2N>::EcRecommendedParameters
              ((EcRecommendedParameters<CryptoPP::EC2N> *)&DAT_0211fa00,(OID *)&local_168,0x83,8,3,2
               ,0,"07A11B09A76B562144418FF3FF8C2570B8","0217C05610884B63B9C6C7291678F9D341",
               "040081BAF91FDF9833C40F9C181343638399078C6E7EA38C001F73C8134B1B4EF9E150",
               "0400000000000000023123953A9464B54D",2);
                    /* try { // try from 00ca0610 to 00ca0617 has its CatchHandler @ 00ca1138 */
    CryptoPP::ASN1::sect131r2();
                    /* try { // try from 00ca0618 to 00ca066b has its CatchHandler @ 00ca1110 */
    CryptoPP::EcRecommendedParameters<CryptoPP::EC2N>::EcRecommendedParameters
              ((EcRecommendedParameters<CryptoPP::EC2N> *)&DAT_0211fa58,(OID *)&local_188,0x83,8,3,2
               ,0,"03E5A88919D7CAFCBF415F07C2176573B2","04B8266A46C55657AC734CE38F018F2192",
               "040356DCD8F2F95031AD652D23951BB366A80648F06D867940A5366D9E265DE9EB240F",
               "0400000000000000016954A233049BA98F",2);
                    /* try { // try from 00ca066c to 00ca0673 has its CatchHandler @ 00ca10e8 */
    CryptoPP::ASN1::sect193r1();
                    /* try { // try from 00ca0674 to 00ca06bb has its CatchHandler @ 00ca10c0 */
    CryptoPP::EcRecommendedParameters<CryptoPP::EC2N>::EcRecommendedParameters
              ((EcRecommendedParameters<CryptoPP::EC2N> *)&DAT_0211fab0,(OID *)&local_1a8,0xc1,0xf,0
               ,"0017858FEB7A98975169E171F77B4087DE098AC8A911DF7B01",
               "00FDFB49BFE6C3A89FACADAA7A1E5BBC7CC1C2E5D831478814",
               "0401F481BC5F0FF84A74AD6CDF6FDEF4BF6179625372D8C0C5E10025E399F2903712CCF3EA9E3A1AD17FB0B3201B6AF7CE1B05"
               ,"01000000000000000000000000C7F34A778F443ACC920EBA49",2);
                    /* try { // try from 00ca06bc to 00ca06c3 has its CatchHandler @ 00ca1098 */
    CryptoPP::ASN1::sect193r2();
                    /* try { // try from 00ca06c4 to 00ca070b has its CatchHandler @ 00ca1070 */
    CryptoPP::EcRecommendedParameters<CryptoPP::EC2N>::EcRecommendedParameters
              ((EcRecommendedParameters<CryptoPP::EC2N> *)&DAT_0211fb08,(OID *)&local_1c8,0xc1,0xf,0
               ,"0163F35A5137C2CE3EA6ED8667190B0BC43ECD69977702709B",
               "00C9BB9E8927D4D64C377E2AB2856A5B16E3EFB7F61D4316AE",
               "0400D9B67D192E0367C803F39E1A7E82CA14A651350AAE617E8F01CE94335607C304AC29E7DEFBD9CA01F596F927224CDECF6C"
               ,"010000000000000000000000015AAB561B005413CCD4EE99D5",2);
                    /* try { // try from 00ca070c to 00ca0713 has its CatchHandler @ 00ca1048 */
    CryptoPP::ASN1::sect233k1();
                    /* try { // try from 00ca0714 to 00ca075b has its CatchHandler @ 00ca1020 */
    CryptoPP::EcRecommendedParameters<CryptoPP::EC2N>::EcRecommendedParameters
              ((EcRecommendedParameters<CryptoPP::EC2N> *)&DAT_0211fb60,(OID *)&local_1e8,0xe9,0x4a,
               0,"000000000000000000000000000000000000000000000000000000000000",
               "000000000000000000000000000000000000000000000000000000000001",
               "04017232BA853A7E731AF129F22FF4149563A419C26BF50A4C9D6EEFAD612601DB537DECE819B7F70F555A67C427A8CD9BF18AEB9B56E0C11056FAE6A3"
               ,"8000000000000000000000000000069D5BB915BCD46EFB1AD5F173ABDF",4);
                    /* try { // try from 00ca075c to 00ca0763 has its CatchHandler @ 00ca0ff8 */
    CryptoPP::ASN1::sect233r1();
                    /* try { // try from 00ca0764 to 00ca07ab has its CatchHandler @ 00ca0de0 */
    CryptoPP::EcRecommendedParameters<CryptoPP::EC2N>::EcRecommendedParameters
              ((EcRecommendedParameters<CryptoPP::EC2N> *)&DAT_0211fbb8,(OID *)&local_208,0xe9,0x4a,
               0,"000000000000000000000000000000000000000000000000000000000001",
               "0066647EDE6C332C7F8C0923BB58213B333B20E9CE4281FE115F7D8F90AD",
               "0400FAC9DFCBAC8313BB2139F1BB755FEF65BC391F8B36F8F8EB7371FD558B01006A08A41903350678E58528BEBF8A0BEFF867A7CA36716F7E01F81052"
               ,"01000000000000000000000000000013E974E72F8A6922031D2603CFE0D7",2);
                    /* try { // try from 00ca07ac to 00ca07b3 has its CatchHandler @ 00ca0db8 */
    CryptoPP::ASN1::sect409k1();
                    /* try { // try from 00ca07b4 to 00ca07fb has its CatchHandler @ 00ca0d70 */
    CryptoPP::EcRecommendedParameters<CryptoPP::EC2N>::EcRecommendedParameters
              ((EcRecommendedParameters<CryptoPP::EC2N> *)&DAT_0211fc10,(OID *)&local_228,0x199,0x57
               ,0,
               "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"
               ,
               "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001"
               ,
               "040060F05F658F49C1AD3AB1890F7184210EFD0987E307C84C27ACCFB8F9F67CC2C460189EB5AAAA62EE222EB1B35540CFE902374601E369050B7C4E42ACBA1DACBF04299C3460782F918EA427E6325165E9EA10E3DA5F6C42E9C55215AA9CA27A5863EC48D8E0286B"
               ,
               "7FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFE5F83B2D4EA20400EC4557D5ED3E3E7CA5B4B5C83B8E01E5FCF"
               ,4);
                    /* try { // try from 00ca07fc to 00ca0803 has its CatchHandler @ 00ca0d48 */
    CryptoPP::ASN1::sect409r1();
                    /* try { // try from 00ca0804 to 00ca084b has its CatchHandler @ 00ca0d00 */
    CryptoPP::EcRecommendedParameters<CryptoPP::EC2N>::EcRecommendedParameters
              ((EcRecommendedParameters<CryptoPP::EC2N> *)&DAT_0211fc68,(OID *)&local_248,0x199,0x57
               ,0,
               "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001"
               ,
               "0021A5C2C8EE9FEB5C4B9A753B7B476B7FD6422EF1F3DD674761FA99D6AC27C8A9A197B272822F6CD57A55AA4F50AE317B13545F"
               ,
               "04015D4860D088DDB3496B0C6064756260441CDE4AF1771D4DB01FFE5B34E59703DC255A868A1180515603AEAB60794E54BB7996A70061B1CFAB6BE5F32BBFA78324ED106A7636B9C5A7BD198D0158AA4F5488D08F38514F1FDF4B4F40D2181B3681C364BA0273C706"
               ,
               "010000000000000000000000000000000000000000000000000001E2AAD6A612F33307BE5FA47C3C9E052F838164CD37D9A21173"
               ,2);
                    /* try { // try from 00ca084c to 00ca0853 has its CatchHandler @ 00ca0cd8 */
    CryptoPP::ASN1::sect571k1();
                    /* try { // try from 00ca0854 to 00ca08a7 has its CatchHandler @ 00ca0b04 */
    CryptoPP::EcRecommendedParameters<CryptoPP::EC2N>::EcRecommendedParameters
              ((EcRecommendedParameters<CryptoPP::EC2N> *)&DAT_0211fcc0,(OID *)&local_268,0x23b,10,5
               ,2,0,
               "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"
               ,
               "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001"
               ,
               "04026EB7A859923FBC82189631F8103FE4AC9CA2970012D5D46024804801841CA44370958493B205E647DA304DB4CEB08CBBD1BA39494776FB988B47174DCA88C7E2945283A01C89720349DC807F4FBF374F4AEADE3BCA95314DD58CEC9F307A54FFC61EFC006D8A2C9D4979C0AC44AEA74FBEBBB9F772AEDCB620B01A7BA7AF1B320430C8591984F601CD4C143EF1C7A3"
               ,
               "020000000000000000000000000000000000000000000000000000000000000000000000131850E1F19A63E4B391A8DB917F4138B630D84BE5D639381E91DEB45CFE778F637C1001"
               ,4);
                    /* try { // try from 00ca08a8 to 00ca08af has its CatchHandler @ 00ca0af4 */
    CryptoPP::ASN1::sect571r1();
                    /* try { // try from 00ca08b0 to 00ca0903 has its CatchHandler @ 00ca0ac8 */
    CryptoPP::EcRecommendedParameters<CryptoPP::EC2N>::EcRecommendedParameters
              ((EcRecommendedParameters<CryptoPP::EC2N> *)&DAT_0211fd18,(OID *)&local_288,0x23b,10,5
               ,2,0,
               "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001"
               ,
               "02F40E7E2221F295DE297117B7F3D62F5C6A97FFCB8CEFF1CD6BA8CE4A9A18AD84FFABBD8EFA59332BE7AD6756A66E294AFD185A78FF12AA520E4DE739BACA0C7FFEFF7F2955727A"
               ,
               "040303001D34B856296C16C0D40D3CD7750A93D1D2955FA80AA5F40FC8DB7B2ABDBDE53950F4C0D293CDD711A35B67FB1499AE60038614F1394ABFA3B4C850D927E1E7769C8EEC2D19037BF27342DA639B6DCCFFFEB73D69D78C6C27A6009CBBCA1980F8533921E8A684423E43BAB08A576291AF8F461BB2A8B3531D2F0485C19B16E2F1516E23DD3C1A4827AF1B8AC15B"
               ,
               "03FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFE661CE18FF55987308059B186823851EC7DD9CA1161DE93D5174D66E8382E9BB2FE84E47"
               ,2);
    local_268 = &PTR__OID_00fecd98;
    local_288 = local_268;
    if (local_280 != (void *)0x0) {
      local_278 = local_280;
      operator_delete(local_280);
    }
    if (local_260 != (void *)0x0) {
      local_258 = local_260;
      operator_delete(local_260);
    }
    local_248 = &PTR__OID_00fecd98;
    if (local_240 != (void *)0x0) {
      local_238 = local_240;
      operator_delete(local_240);
    }
    local_228 = &PTR__OID_00fecd98;
    if (local_220 != (void *)0x0) {
      local_218 = local_220;
      operator_delete(local_220);
    }
    local_208 = &PTR__OID_00fecd98;
    if (local_200 != (void *)0x0) {
      local_1f8 = local_200;
      operator_delete(local_200);
    }
    local_1e8 = &PTR__OID_00fecd98;
    if (local_1e0 != (void *)0x0) {
      local_1d8 = local_1e0;
      operator_delete(local_1e0);
    }
    local_1c8 = &PTR__OID_00fecd98;
    if (local_1c0 != (void *)0x0) {
      local_1b8 = local_1c0;
      operator_delete(local_1c0);
    }
    local_1a8 = &PTR__OID_00fecd98;
    if (local_1a0 != (void *)0x0) {
      local_198 = local_1a0;
      operator_delete(local_1a0);
    }
    local_188 = &PTR__OID_00fecd98;
    if (local_180 != (void *)0x0) {
      local_178 = local_180;
      operator_delete(local_180);
    }
    local_168 = &PTR__OID_00fecd98;
    if (local_160 != (void *)0x0) {
      local_158 = local_160;
      operator_delete(local_160);
    }
    local_148 = &PTR__OID_00fecd98;
    if (local_140 != (void *)0x0) {
      local_138 = local_140;
      operator_delete(local_140);
    }
    local_128 = &PTR__OID_00fecd98;
    if (local_120 != (void *)0x0) {
      local_118 = local_120;
      operator_delete(local_120);
    }
    local_108 = &PTR__OID_00fecd98;
    if (local_100 != (void *)0x0) {
      local_f8 = local_100;
      operator_delete(local_100);
    }
    local_e8 = &PTR__OID_00fecd98;
    if (local_e0 != (void *)0x0) {
      local_d8 = local_e0;
      operator_delete(local_e0);
    }
    local_c8 = &PTR__OID_00fecd98;
    if (local_c0 != (void *)0x0) {
      local_b8 = local_c0;
      operator_delete(local_c0);
    }
    local_a8 = &PTR__OID_00fecd98;
    if (local_a0 != (void *)0x0) {
      local_98 = local_a0;
      operator_delete(local_a0);
    }
    local_88 = &PTR__OID_00fecd98;
    if (local_80 != (void *)0x0) {
      local_78 = local_80;
      operator_delete(local_80);
    }
    local_68 = &PTR__OID_00fecd98;
    if (local_60 != (void *)0x0) {
      local_58 = local_60;
      operator_delete(local_60);
    }
    __cxa_atexit(FUN_00cb8190,0,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_0211f738);
  }
  *param_1 = &DAT_0211f740;
  *param_2 = &DAT_0211fd70;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


