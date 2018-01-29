/* props/europe-1.80: HTC Europe: HTC__001 HTC__034 HTC__A07 HTC__J15 HTC__M27 HTC__016 HTC__002 */
static bool is_variant_europe(std::string bootcid) {
    if (bootcid == "HTC__001") return true;
    if (bootcid == "HTC__034") return true;
    if (bootcid == "HTC__A07") return true;
    if (bootcid == "HTC__J15") return true;
    if (bootcid == "HTC__M27") return true;
    if (bootcid == "HTC__016") return true;
    if (bootcid == "HTC__002") return true;
    return false;
}

static const char *htc_europe_properties =
    "ro.build.fingerprint=htc/pmeuhl_00401/htc_pmeuhl:8.0.0/OPR1.170623.027/1012001.2:user/release-keys\n"
    "ro.build.product=htc_pmeuhl\n"
    "ro.product.device=htc_pmeuhl\n"
    "ro.product.model=HTC 10\n"
    "ro.telephony.default_network=0\n"
    "ro.telephony.ipv6_capability=1\n"
    "ro.ril.vmail.23415=1571,BT,121,VDF UK\n"
    "ro.ril.vmail.27203=171\n"
    "ro.ril.vmail.65502=181\n"
    "ro.ril.vmail.27211=171\n"
    "ro.ril.vmail.65510=100\n"
    "ro.ril.vmail.22299=4133,3ITA\n"
    "ro.ril.vmail.23410=901,O2 UK,905,TESCO,443,giffgaff\n"
    "ro.ril.vmail.22201=41901,I TIM\n"
    "ro.ril.vmail.22210=42020,Vodafone IT\n"
    "ro.ril.vmail.22288=4200,I WIND\n"
    "ro.ril.vmail.20801=888\n"
    "ro.ril.vmail.20810=123\n"
    "ro.ril.vmail.20826=777\n"
    "ro.ril.vmail.42403=161\n"
    "ro.ril.vmail.23003=+420608989899\n"
    "ro.ril.enable.a52=0\n"
    "ro.ril.enable.a53=1\n"
    "ro.ril.enable.dtm=0\n"
    "ro.ril.enable.gea3=1\n"
    "ro.ril.enable.amr.wideband=1\n"
    "ro.ril.enable.managed.roaming=1\n"
    "ro.ril.enable.sdr=1\n"
    "ro.ril.enable.pre_r8fd=1\n"
    "ro.ril.fd.pre_r8_tout.scr_off=2\n"
    "ro.ril.fd.pre_r8_tout.scr_on=3\n"
    "ro.ril.enable.r8fd=1\n"
    "ro.ril.fd.r8_tout.scr_off=2\n"
    "ro.ril.fd.r8_tout.scr_on=3\n"
    "ro.ril.show.all.plmn=1\n"
    "ro.ril.air.enabled=1\n"
    "ro.ril.gsm.to.lte.blind.redir=1\n"
    "ro.ril.enable.isr=1\n"
    "ro.ril.ltefgi=2144337598\n"
    "ro.ril.ltefgi.rel9=3221225472\n"
    "ro.ril.gsm.amrwb=1\n"
    "ro.ril.enable.enhance.search=1\n"
    "ro.ril.esm.blacklist=22601,26806,26801,21403,42502,25007,25054,25027\n"
    "ro.telephony.bl=27202\n"
    "ro.ril.hsxpa=5\n"
    "ro.ril.hsdpa.category=24\n"
    "ro.ril.hsupa.category=6\n"
    "ro.ril.disable.cpc=0\n"
    "ro.ril.n-roaming.mcclist=219,204,234,272,222,240,232,238,260,425\n"
    "ro.ril.ltefgi.rel10=1076232192\n"
    "ro.ril.hsdpa.dbdc=1\n"
    "persist.radio.NETWORK_SWITCH=1\n"
    "persist.rild.nitz_plmn=\n"
    "persist.rild.nitz_long_ons_0=\n"
    "persist.rild.nitz_long_ons_1=\n"
    "persist.rild.nitz_long_ons_2=\n"
    "persist.rild.nitz_long_ons_3=\n"
    "persist.rild.nitz_short_ons_0=\n"
    "persist.rild.nitz_short_ons_1=\n"
    "persist.rild.nitz_short_ons_2=\n"
    "persist.rild.nitz_short_ons_3=\n"
    "ril.subscription.types=NV,RUIM\n"
    "telephony.lteOnCdmaDevice=1\n"
    "telephony.lteOnCdmaDevice=0\n"
    "persist.radio.fill_eons=1\n"
    "persist.igps.sensor=on\n"
    "persist.radio.custom_ecc=1\n"
    "persist.radio.apm_sim_not_pwdn=0\n"
    "persist.radio.apm_mdm_not_pwdn=1\n"
    "persist.radio.cs_srv_type=1\n"
    "ro.telephony.default_network=9\n"
    "persist.radio.sap_silent_pin=1\n"
    "ro.gps.agps_provider=1\n"
;
