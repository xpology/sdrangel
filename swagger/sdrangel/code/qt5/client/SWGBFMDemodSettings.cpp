/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 4.11.6
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGBFMDemodSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGBFMDemodSettings::SWGBFMDemodSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGBFMDemodSettings::SWGBFMDemodSettings() {
    input_frequency_offset = 0L;
    m_input_frequency_offset_isSet = false;
    rf_bandwidth = 0.0f;
    m_rf_bandwidth_isSet = false;
    af_bandwidth = 0.0f;
    m_af_bandwidth_isSet = false;
    volume = 0.0f;
    m_volume_isSet = false;
    squelch = 0.0f;
    m_squelch_isSet = false;
    audio_stereo = 0;
    m_audio_stereo_isSet = false;
    lsb_stereo = 0;
    m_lsb_stereo_isSet = false;
    show_pilot = 0;
    m_show_pilot_isSet = false;
    rds_active = 0;
    m_rds_active_isSet = false;
    rgb_color = 0;
    m_rgb_color_isSet = false;
    title = nullptr;
    m_title_isSet = false;
    audio_device_name = nullptr;
    m_audio_device_name_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = nullptr;
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_device_index = 0;
    m_reverse_api_device_index_isSet = false;
    reverse_api_channel_index = 0;
    m_reverse_api_channel_index_isSet = false;
}

SWGBFMDemodSettings::~SWGBFMDemodSettings() {
    this->cleanup();
}

void
SWGBFMDemodSettings::init() {
    input_frequency_offset = 0L;
    m_input_frequency_offset_isSet = false;
    rf_bandwidth = 0.0f;
    m_rf_bandwidth_isSet = false;
    af_bandwidth = 0.0f;
    m_af_bandwidth_isSet = false;
    volume = 0.0f;
    m_volume_isSet = false;
    squelch = 0.0f;
    m_squelch_isSet = false;
    audio_stereo = 0;
    m_audio_stereo_isSet = false;
    lsb_stereo = 0;
    m_lsb_stereo_isSet = false;
    show_pilot = 0;
    m_show_pilot_isSet = false;
    rds_active = 0;
    m_rds_active_isSet = false;
    rgb_color = 0;
    m_rgb_color_isSet = false;
    title = new QString("");
    m_title_isSet = false;
    audio_device_name = new QString("");
    m_audio_device_name_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = new QString("");
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_device_index = 0;
    m_reverse_api_device_index_isSet = false;
    reverse_api_channel_index = 0;
    m_reverse_api_channel_index_isSet = false;
}

void
SWGBFMDemodSettings::cleanup() {










    if(title != nullptr) { 
        delete title;
    }
    if(audio_device_name != nullptr) { 
        delete audio_device_name;
    }

    if(reverse_api_address != nullptr) { 
        delete reverse_api_address;
    }



}

SWGBFMDemodSettings*
SWGBFMDemodSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGBFMDemodSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&input_frequency_offset, pJson["inputFrequencyOffset"], "qint64", "");
    
    ::SWGSDRangel::setValue(&rf_bandwidth, pJson["rfBandwidth"], "float", "");
    
    ::SWGSDRangel::setValue(&af_bandwidth, pJson["afBandwidth"], "float", "");
    
    ::SWGSDRangel::setValue(&volume, pJson["volume"], "float", "");
    
    ::SWGSDRangel::setValue(&squelch, pJson["squelch"], "float", "");
    
    ::SWGSDRangel::setValue(&audio_stereo, pJson["audioStereo"], "qint32", "");
    
    ::SWGSDRangel::setValue(&lsb_stereo, pJson["lsbStereo"], "qint32", "");
    
    ::SWGSDRangel::setValue(&show_pilot, pJson["showPilot"], "qint32", "");
    
    ::SWGSDRangel::setValue(&rds_active, pJson["rdsActive"], "qint32", "");
    
    ::SWGSDRangel::setValue(&rgb_color, pJson["rgbColor"], "qint32", "");
    
    ::SWGSDRangel::setValue(&title, pJson["title"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&audio_device_name, pJson["audioDeviceName"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&use_reverse_api, pJson["useReverseAPI"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_address, pJson["reverseAPIAddress"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&reverse_api_port, pJson["reverseAPIPort"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_device_index, pJson["reverseAPIDeviceIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_channel_index, pJson["reverseAPIChannelIndex"], "qint32", "");
    
}

QString
SWGBFMDemodSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGBFMDemodSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_input_frequency_offset_isSet){
        obj->insert("inputFrequencyOffset", QJsonValue(input_frequency_offset));
    }
    if(m_rf_bandwidth_isSet){
        obj->insert("rfBandwidth", QJsonValue(rf_bandwidth));
    }
    if(m_af_bandwidth_isSet){
        obj->insert("afBandwidth", QJsonValue(af_bandwidth));
    }
    if(m_volume_isSet){
        obj->insert("volume", QJsonValue(volume));
    }
    if(m_squelch_isSet){
        obj->insert("squelch", QJsonValue(squelch));
    }
    if(m_audio_stereo_isSet){
        obj->insert("audioStereo", QJsonValue(audio_stereo));
    }
    if(m_lsb_stereo_isSet){
        obj->insert("lsbStereo", QJsonValue(lsb_stereo));
    }
    if(m_show_pilot_isSet){
        obj->insert("showPilot", QJsonValue(show_pilot));
    }
    if(m_rds_active_isSet){
        obj->insert("rdsActive", QJsonValue(rds_active));
    }
    if(m_rgb_color_isSet){
        obj->insert("rgbColor", QJsonValue(rgb_color));
    }
    if(title != nullptr && *title != QString("")){
        toJsonValue(QString("title"), title, obj, QString("QString"));
    }
    if(audio_device_name != nullptr && *audio_device_name != QString("")){
        toJsonValue(QString("audioDeviceName"), audio_device_name, obj, QString("QString"));
    }
    if(m_use_reverse_api_isSet){
        obj->insert("useReverseAPI", QJsonValue(use_reverse_api));
    }
    if(reverse_api_address != nullptr && *reverse_api_address != QString("")){
        toJsonValue(QString("reverseAPIAddress"), reverse_api_address, obj, QString("QString"));
    }
    if(m_reverse_api_port_isSet){
        obj->insert("reverseAPIPort", QJsonValue(reverse_api_port));
    }
    if(m_reverse_api_device_index_isSet){
        obj->insert("reverseAPIDeviceIndex", QJsonValue(reverse_api_device_index));
    }
    if(m_reverse_api_channel_index_isSet){
        obj->insert("reverseAPIChannelIndex", QJsonValue(reverse_api_channel_index));
    }

    return obj;
}

qint64
SWGBFMDemodSettings::getInputFrequencyOffset() {
    return input_frequency_offset;
}
void
SWGBFMDemodSettings::setInputFrequencyOffset(qint64 input_frequency_offset) {
    this->input_frequency_offset = input_frequency_offset;
    this->m_input_frequency_offset_isSet = true;
}

float
SWGBFMDemodSettings::getRfBandwidth() {
    return rf_bandwidth;
}
void
SWGBFMDemodSettings::setRfBandwidth(float rf_bandwidth) {
    this->rf_bandwidth = rf_bandwidth;
    this->m_rf_bandwidth_isSet = true;
}

float
SWGBFMDemodSettings::getAfBandwidth() {
    return af_bandwidth;
}
void
SWGBFMDemodSettings::setAfBandwidth(float af_bandwidth) {
    this->af_bandwidth = af_bandwidth;
    this->m_af_bandwidth_isSet = true;
}

float
SWGBFMDemodSettings::getVolume() {
    return volume;
}
void
SWGBFMDemodSettings::setVolume(float volume) {
    this->volume = volume;
    this->m_volume_isSet = true;
}

float
SWGBFMDemodSettings::getSquelch() {
    return squelch;
}
void
SWGBFMDemodSettings::setSquelch(float squelch) {
    this->squelch = squelch;
    this->m_squelch_isSet = true;
}

qint32
SWGBFMDemodSettings::getAudioStereo() {
    return audio_stereo;
}
void
SWGBFMDemodSettings::setAudioStereo(qint32 audio_stereo) {
    this->audio_stereo = audio_stereo;
    this->m_audio_stereo_isSet = true;
}

qint32
SWGBFMDemodSettings::getLsbStereo() {
    return lsb_stereo;
}
void
SWGBFMDemodSettings::setLsbStereo(qint32 lsb_stereo) {
    this->lsb_stereo = lsb_stereo;
    this->m_lsb_stereo_isSet = true;
}

qint32
SWGBFMDemodSettings::getShowPilot() {
    return show_pilot;
}
void
SWGBFMDemodSettings::setShowPilot(qint32 show_pilot) {
    this->show_pilot = show_pilot;
    this->m_show_pilot_isSet = true;
}

qint32
SWGBFMDemodSettings::getRdsActive() {
    return rds_active;
}
void
SWGBFMDemodSettings::setRdsActive(qint32 rds_active) {
    this->rds_active = rds_active;
    this->m_rds_active_isSet = true;
}

qint32
SWGBFMDemodSettings::getRgbColor() {
    return rgb_color;
}
void
SWGBFMDemodSettings::setRgbColor(qint32 rgb_color) {
    this->rgb_color = rgb_color;
    this->m_rgb_color_isSet = true;
}

QString*
SWGBFMDemodSettings::getTitle() {
    return title;
}
void
SWGBFMDemodSettings::setTitle(QString* title) {
    this->title = title;
    this->m_title_isSet = true;
}

QString*
SWGBFMDemodSettings::getAudioDeviceName() {
    return audio_device_name;
}
void
SWGBFMDemodSettings::setAudioDeviceName(QString* audio_device_name) {
    this->audio_device_name = audio_device_name;
    this->m_audio_device_name_isSet = true;
}

qint32
SWGBFMDemodSettings::getUseReverseApi() {
    return use_reverse_api;
}
void
SWGBFMDemodSettings::setUseReverseApi(qint32 use_reverse_api) {
    this->use_reverse_api = use_reverse_api;
    this->m_use_reverse_api_isSet = true;
}

QString*
SWGBFMDemodSettings::getReverseApiAddress() {
    return reverse_api_address;
}
void
SWGBFMDemodSettings::setReverseApiAddress(QString* reverse_api_address) {
    this->reverse_api_address = reverse_api_address;
    this->m_reverse_api_address_isSet = true;
}

qint32
SWGBFMDemodSettings::getReverseApiPort() {
    return reverse_api_port;
}
void
SWGBFMDemodSettings::setReverseApiPort(qint32 reverse_api_port) {
    this->reverse_api_port = reverse_api_port;
    this->m_reverse_api_port_isSet = true;
}

qint32
SWGBFMDemodSettings::getReverseApiDeviceIndex() {
    return reverse_api_device_index;
}
void
SWGBFMDemodSettings::setReverseApiDeviceIndex(qint32 reverse_api_device_index) {
    this->reverse_api_device_index = reverse_api_device_index;
    this->m_reverse_api_device_index_isSet = true;
}

qint32
SWGBFMDemodSettings::getReverseApiChannelIndex() {
    return reverse_api_channel_index;
}
void
SWGBFMDemodSettings::setReverseApiChannelIndex(qint32 reverse_api_channel_index) {
    this->reverse_api_channel_index = reverse_api_channel_index;
    this->m_reverse_api_channel_index_isSet = true;
}


bool
SWGBFMDemodSettings::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_input_frequency_offset_isSet){
            isObjectUpdated = true; break;
        }
        if(m_rf_bandwidth_isSet){
            isObjectUpdated = true; break;
        }
        if(m_af_bandwidth_isSet){
            isObjectUpdated = true; break;
        }
        if(m_volume_isSet){
            isObjectUpdated = true; break;
        }
        if(m_squelch_isSet){
            isObjectUpdated = true; break;
        }
        if(m_audio_stereo_isSet){
            isObjectUpdated = true; break;
        }
        if(m_lsb_stereo_isSet){
            isObjectUpdated = true; break;
        }
        if(m_show_pilot_isSet){
            isObjectUpdated = true; break;
        }
        if(m_rds_active_isSet){
            isObjectUpdated = true; break;
        }
        if(m_rgb_color_isSet){
            isObjectUpdated = true; break;
        }
        if(title && *title != QString("")){
            isObjectUpdated = true; break;
        }
        if(audio_device_name && *audio_device_name != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_use_reverse_api_isSet){
            isObjectUpdated = true; break;
        }
        if(reverse_api_address && *reverse_api_address != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_reverse_api_port_isSet){
            isObjectUpdated = true; break;
        }
        if(m_reverse_api_device_index_isSet){
            isObjectUpdated = true; break;
        }
        if(m_reverse_api_channel_index_isSet){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}

