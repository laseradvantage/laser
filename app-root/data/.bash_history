mysqldump --skip-lock-tables -h $OPENSHIFT_MYSQL_DB_HOST -P ${OPENSHIFT_MYSQL_DB_PORT:-3306} -u ${OPENSHIFT_MYSQL_DB_USERNAME:-'admin'}  --password="$OPENSHIFT_MYSQL_DB_PASSWORD" --all-databases > ~/app-root/data/all.sql
ls ~/app-root/data/
